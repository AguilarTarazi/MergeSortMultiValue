 /*

MAXIMA CANTIDAD: 1573844
*/

#include "merge.decl.h"
#include "merge.h"
#include "main.decl.h"
#include <stdlib.h>
#include <time.h>
// #include <malloc.h>

extern /* readonly */ CProxy_Main mainProxy;
extern /* readonly */ int cantChares;
extern /* readonly */ int numElements;

Merge::Merge() {
    phase = 0;
    activo = false;
    posicion = -1;
    posicionDer = -1;
    indexLlamoIzq = -1;
    cantFases = 0;
    elementos = -1;

}

// Constructor needed for chare object migration (ignore for now)
// NOTE: This constructor does not need to appear in the ".ci" file
Merge::Merge(CkMigrateMessage *msg) { }

void Merge::initPhase(int pos, int posDer, int phaseN, int tam,int values[],int proxIndex) {
    elementos = tam;
    int *valuesIzq = (int *)malloc(sizeof(int)*(elementos/2));
    int *valuesDer = (int *)malloc(sizeof(int)*(elementos-elementos/2));
    if(valuesIzq == NULL){
        CkPrintf("[%d] valuesIzq es NULL\n",thisIndex);
        CkExit();
    }
    if(valuesDer == NULL){
        CkPrintf("[%d] valuesDer es NULL\n",thisIndex);
        CkExit();
    }
    memcpy(valuesIzq,values,(elementos/2)*sizeof(int));
    memcpy(valuesDer,values+elementos/2,(elementos-elementos/2)*sizeof(int));
    phase = phaseN;
    phase++;
    if(posDer!=-1){
        comparar[cantFases]=proxIndex;
        cantFases++;
    }
    newcantChares = pos-thisIndex+1;
    newPos = newcantChares/2-1+thisIndex;
    if(newcantChares < 2){
        posicion = pos; //BORRARLO
        posicionDer = posDer; // VER SI VA ACA
        posicion = posicionDer;
        myValues = (int *)malloc(sizeof(int)*elementos);
        if(myValues == NULL){
            CkPrintf("[%d] myValues es NULL\n",thisIndex);
            CkExit();
        }
        memcpy(myValues,values,(elementos)*sizeof(int));        //Se copian los valores en variable local
        sort(0,elementos-1);
        mainProxy.barrier();
        if(posicion!=-1){
            activo = true;
        }
    }
    else{
        thisProxy[thisIndex].initPhase(newPos,pos,phase,elementos/2,valuesIzq,newPos+1);
        thisProxy[newPos+1].initPhase(pos,-1,phase,elementos-elementos/2,valuesDer,-1);
        free(valuesIzq);
        valuesIzq=NULL;
        free(valuesDer);
        valuesDer=NULL;
    }
}

void Merge::listo(){
    if(activo){
        startCompare(comparar[cantFases-1]);
    }
}

void Merge::startCompare(int indexDer){
    // CkPrintf("[%d] startCompare con [%d], phase=%d, cantFases=%d, posicion=%d, posicionDer=%d ",thisIndex,indexDer,phase,cantFases,posicion,posicionDer);
    // CkPrintf("elementos=%d, activo=%d\n",elementos,activo);
    // CkPrintf("\n[%d](%d)-%d- Comparando con [%d]    (en phase=%d) %d\n",thisIndex,CkMyPe(),getpid(),indexDer,phase,elementos-1);
    thisProxy[indexDer].requestSwap(phase,thisIndex,myValues[elementos-1]);
}

void Merge::requestSwap(int phaseN,int indexIzq,int lastValueN){
    // CkPrintf("[%d](%d)-%d- en requestSwap con phase:%d y phaseN:%d, activo=%d\n",thisIndex,CkMyPe(),getpid(),phase,phaseN, activo);
    // if(myValues[0]==0) CkPrintf("[%d] ESS NUUUUUULLLL con elementos:%d\n",thisIndex,elementos);
    // if(phase == phaseN && myValues!=NULL){
    if((phase == phaseN || !activo) && myValues!=NULL){
        // CkPrintf("[%d]  Compara Valores %d y %d\n",thisIndex,lastValueN,myValues[0]);
        if(lastValueN > myValues[0]){
            // CkPrintf("\t\t[%d] ACEPTA. Llama a Chare [%d]\n",thisIndex,indexIzq);
    //         // thisProxy[indexIzq].acceptSwap(myValues,elementos); //2: indice derecho que se modificó cuando acepto
            thisProxy[indexIzq].saveValue(myValues,elementos,true);
            free(myValues);
            myValues=NULL;
        }else{
            // if(myValues[0]==0) CkPrintf("[%d] ESS NUUUUUULLLL \n",thisIndex);
            // CkPrintf("\t\t\t\t\t[%d] le DENIEGA a [%d] con elementos:%d, myValues[0]:%d .\n\n",thisIndex,indexIzq, elementos, myValues[0]);
            thisProxy[indexIzq].saveValue(myValues,elementos,false);
            // thisProxy[indexIzq].denySwap(myValues,elementos); //2: indice derecho que no se modificó
            free(myValues);
            myValues=NULL;
        }
    }else{
        // CkPrintf("\t\t\t\t\t[%d] No estoy en misma fase que [%d] o estoy activo.          983\n\n",thisIndex,indexIzq);
    //     // Marcar que me llamó para que vuelva a llamar cuando yo le avise que finalicé esta fase.
        indexLlamoIzq = indexIzq;
    }
}

void Merge::saveValue(int valuesN[], int elementosN, bool ordenar){
    // CkPrintf("[%d]::::::: inicio saveValue :::::::elementos=%d, elementosN=%d\n",thisIndex,elementos, elementosN);
    // for(int i=0;i<elementosN;i++){
    //     CkPrintf("[%d]saveValue     myValues[%d]=%d    valuesN[%d]=%d\n",thisIndex,i,myValues[i],i,valuesN[i]);
    // }
    // CkPrintf("[%d] sizeof: %d\n",thisIndex,(elementosN)*sizeof(int));
    // if(myValues==NULL) CkPrintf("OTRO ERROR\n");
    // myValues = (int *)realloc(myValues,(elementos+elementosN)*sizeof(int));
    int *valuestmp = (int *)realloc(myValues,(elementos+elementosN)*sizeof(int));
    myValues=NULL;
    // if( ( (int *)realloc(myValues,elementos+elementosN) )==NULL);  CkPrintf("ERROR\n");
    if(valuestmp==NULL){
            CkPrintf("[%d] valuestmp es NULL\n",thisIndex);
            CkExit();
    }
    else{
        myValues = valuestmp;
        // free(valuestmp);
        memcpy(myValues+elementos,valuesN,(elementosN)*sizeof(int));
    }
    // myValues = (int *)malloc(sizeof(int)*(elementos+elementosN));
    elementos += elementosN;
    if(ordenar){
        // CkPrintf("[%d] debe ordenar elementos en save\n",thisIndex);
        sort(0,elementos-1);
        // CkPrintf("[%d] ya ordenó elementos en save\n",thisIndex);
        // bubbleSort(elementos);
    }
    // for(int i=0;i<elementos;i++){
    //     CkPrintf("[%d]saveValues[%d]=%d\n",thisIndex,i,myValues[i]);
    // }
    // CkPrintf("[%d]:::::::::: fin saveValue :::::::::::\n",thisIndex);
    check();
}

void Merge::check(){
    // CkPrintf("[%d] check\n",thisIndex);
    phase--;
    cantFases--;
    // CkPrintf("[%d] phase:%d     cantFases:%d\n",thisIndex,phase,cantFases);
    if(phase > 0){
        if(activo){
            if(cantFases > 0){
                // CkPrintf("[%d] ---> Comienza Siguiente Fase: %d. Posicion: %d. PosicionDer: %d\n",thisIndex,phase,posicion, posicionDer);
                // cambiarPosicion(indexDer,true);
                startCompare(comparar[cantFases-1]);
            }
            else if(indexLlamoIzq >= 0){
                activo = false;
                // CkPrintf("[%d] Se desactivó en check Izq. Avisar a [%d] que me puede llamar.\n",thisIndex,indexLlamoIzq);
                // thisProxy[indexLlamoIzq].cambiarPosicion(thisIndex,false);
                thisProxy[indexLlamoIzq].startCompare(thisIndex);
                indexLlamoIzq = -1;
            }
            else{
                // CkPrintf("[%d] Se desactivó definitivamente.\n",thisIndex);
                activo = false;
            }
        }
    }
    else{
        if(thisIndex==0){
            mainProxy.terminar(elementos,myValues);
            CkPrintf("\n=============================================================================================\n");
            CkPrintf("====================================== FIN DEL PROGRAMA =====================================\n");
            CkPrintf("=============================================================================================\n");
        }
	    activo = false;
    }
}



void Merge::merging(int low, int mid, int high) {
    int l1, l2, i;
    // int *b = (int *)malloc(sizeof(int)*elementos);
    int b[elementos];

    for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
        // CkPrintf("[%d] HOLA FOR 1 MERGE %d\n",thisIndex,i);
        if(myValues[l1] <= myValues[l2]){
            // CkPrintf("[%d] HOLA IF FOR MERGE %d\n",thisIndex,i);
            b[i] = myValues[l1++];
        }else{
            // CkPrintf("[%d] HOLA ELSE FOR MERGE %d\n",thisIndex,i);
            b[i] = myValues[l2++];
        }
        // l1++;
        // l2++;
    }

    while(l1 <= mid){
        // CkPrintf("[%d] HOLA WHILE 1 MERGE %d\n",thisIndex,i);
        b[i++] = myValues[l1++];
    }

    while(l2 <= high){
        // CkPrintf("[%d] HOLA WHILE 1 MERGE %d\n",thisIndex,i);
        b[i++] = myValues[l2++];
    }

    for(i = low; i <= high; i++){
        myValues[i] = b[i];
    }
}

void Merge::sort(int low, int high) {
    int mid;
    if(low < high) {
        mid = (low + high) / 2;
        sort(low, mid);
        sort(mid+1, high);
        merging(low, mid, high);
        // CkPrintf("[%d]LISTO\n",thisIndex);
    }else {
      return;
    }
}

void Merge::bubbleSort(int tam) {
   int temp;
   int i,j;
   bool swapped = false;
   // loop through all numbers
   for(i = 0; i < elementos*tam-1; i++) {
      swapped = false;
      // loop through numbers falling ahead
      for(j = 0; j < elementos*tam-1-i; j++) {
         if(myValues[j] > myValues[j+1]) {
            temp = myValues[j];
            myValues[j] = myValues[j+1];
            myValues[j+1] = temp;
            swapped = true;
         }
      }
      // if no number was swapped that means
      //   array is sorted now, break the loop.
      if(!swapped) {
         break;
      }
   }
}

#include "merge.def.h"
