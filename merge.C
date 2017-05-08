 /*
Tenemos un array de N chares. Cada chare tiene en su interior un vector de M valores.
Dentro de cada chare, el vector de M valores se ordena por quick sort.
Una vez ordenado, el chare X le dice al chare X+1 que le mande su vector de M valores.
El chare X recibe el array de X+1 y comienza a comparar sus valores de la forma que lo hace Merge, es decir:
    compara el x[0] con x+1[0].
        Si x[0] > x+1[0], guarda x+1[0] en un array auxiliar y compara x[0] con x+1[1].
        Si no, guarda x[0] en un array auxiliar y comparar x[1] con x+1[1].

VER MERGE SECUENCIAL
AGREGAR MULTIVALORES
COMPARACION
*/

#include "merge.decl.h"
#include "merge.h"
#include "main.decl.h"
#include <stdlib.h>
#include <time.h>
#include <malloc.h>

extern /* readonly */ CProxy_Main mainProxy;
extern /* readonly */ int cantChares;
extern /* readonly */ int numElements;

Merge::Merge() {
    numElementsLocal = numElements;
    myValue = thisIndex; //Ascendente
    myValue =  rand() % 100; //Aleatorio
    tempo = myValue;
    phase = 0;
    activo = false;
    indexSave = thisIndex;
    posicion = -1;
    posicionDer = -1;
    indexLlamoIzq = -1;
    primero = -1;
    cantFases = 0;
    elementos = -1;
    noValues = true;
}

// Constructor needed for chare object migration (ignore for now)
// NOTE: This constructor does not need to appear in the ".ci" file
Merge::Merge(CkMigrateMessage *msg) { }

void Merge::initPhase(int pos, int posDer, int phaseN, int values[],int tam,int proxIndex) {
    // CkPrintf("[%d] con proxIndex:%d\n",thisIndex,proxIndex);
    elementos = tam;
    // CkPrintf("[%d]  TAM: %d\n",thisIndex,elementos);
    // for(int i=0;i<elementos;i++)
    //     CkPrintf("[%d] NoOrdenado[%d]: %d\n",thisIndex,i,myValues[i]);
    // CkPrintf("[%d] elementos/2=%d   elementos-elementos/2=%d\n",thisIndex,elementos/2,elementos-elementos/2);
    int *valuesIzq = (int *)malloc(sizeof(int)*(elementos/2));
    int *valuesDer = (int *)malloc(sizeof(int)*(elementos-elementos/2));
    memcpy(valuesIzq,values,(elementos/2)*sizeof(int));
    memcpy(valuesDer,values+elementos/2,(elementos-elementos/2)*sizeof(int));
    primero = thisIndex;
    phase = phaseN;
    phase++;
    if(posDer!=-1){
        comparar[cantFases]=proxIndex;
        cantFases++;
    }
    // CkPrintf("Chare [%d] con pos=%d, phase=%d, tam=%d\n",thisIndex,pos,phase,elementos);
    newcantChares = pos-thisIndex+1;
    newPos = newcantChares/2-1+thisIndex;
    if(newcantChares < 2){
        posicion = pos; //BORRARLO
        posicionDer = posDer; // VER SI VA ACA
        posicion = posicionDer;
        // CkPrintf("[%d] ********************************elementos:%d\n",thisIndex,elementos);
        myValues = (int *)malloc(sizeof(int)*elementos);
        memcpy(myValues,values,(elementos)*sizeof(int));        //Se copian los valores en variable local
        noValues=false;
        // CkPrintf("[%d] ------- Ya tiene valores.\n",thisIndex);
        // CkPrintf("[%d]  TAM: %d\n",thisIndex,elementos);
        // for(int i=0;i<elementos;i++)
        //     CkPrintf("[%d] NoOrdenado[%d]: %d\n",thisIndex,i,myValues[i]);
        if(posicion!=-1){
        //     CkPrintf("[%d] comparar[ ",thisIndex);
        //     for(int i=0;i<cantFases;i++){
        //         CkPrintf("%d ",comparar[i]);
        //     }
        //     CkPrintf("]\n");
            // CkPrintf("Chare [%d] comienza con phase = %d, y pos %d\n",thisIndex,phase,pos);
            // sort(0,elementos-1,myValues);
            // for(int i=0;i<elementos;i++)
                // CkPrintf("[%d] ordenado[%d]: %d\n",thisIndex,i,myValues[i]);
            // startCompare(thisIndex+1,indexSave, true, posicion, primero);
            activo = true;
            startCompare(comparar[cantFases-1],indexSave, true, posicion, primero);
        }
        else{
            // CkPrintf("[%d] else de la 91\n",thisIndex);
            phase--;
            sort(0,elementos-1,myValues);
            phase++;
            // for(int i=0;i<elementos;i++)
            //     CkPrintf("[%d] ordenado[%d]: %d\n",thisIndex,i,myValues[i]);
        }
    }
    else{
        // CkPrintf("[%d] Divide con newPos=%d, pos=%d, phase=%d, elementos/2=%d, cantFases=%d\n",thisIndex,newPos,pos,phase,elementos/2,cantFases);
        thisProxy[thisIndex].initPhase(newPos,pos,phase,valuesIzq,elementos/2,newPos+1);
        // CkPrintf("[%d] Divide con pos=%d, -1, phase=%d, elementos-elementos/2=%d\n",thisIndex,pos,phase,elementos-elementos/2);
        thisProxy[newPos+1].initPhase(pos,-1,phase,valuesDer,elementos-elementos/2,-1);
    }
}

void Merge::startCompare(int indexDer, int indexS, bool seMovioIndexDer, int posicionN, int primeroN){
    // CkPrintf("[%d] startCompare con [%d], phase=%d, posicion=%d, posicionDer=%d ",thisIndex,indexDer,phase,posicion,posicionDer);
    // CkPrintf("elementos=%d, activo=%d\n",elementos,activo);
    indexSave = indexS;
    posicion = posicionN;
    primero = primeroN;
    // CkPrintf("\n[%d] Comparando con [%d]    (en phase=%d) %d\n",thisIndex,indexDer,phase,elementos-1);
    thisProxy[indexDer].requestSwap(phase,tempo,thisIndex,myValues[elementos-1]);
}

void Merge::requestSwap(int phaseN, int valueN, int indexIzq,int lastValueN){
    // CkPrintf("[%d] en requestSwap con phase:%d y phaseN:%d, activo=%d\n",thisIndex,phase,phaseN, activo);
    // if(myValues==NULL) CkPrintf("[%d] ESS NUUUUUULLLL con elementos:%d\n",thisIndex,elementos);
    if(phase == phaseN && !noValues){
    // if(phase == phaseN && myValues!=NULL){
    // if(((phase == phaseN && activo) || (phase!=phaseN && !activo)) && myValues!=NULL){
        // CkPrintf("[%d]  Compara Valores %d y %d\n",thisIndex,lastValueN,myValues[0]);
        if(lastValueN > myValues[0]){
            // CkPrintf("\t\t[%d] ACEPTA. Llama a Chare [%d]\n",thisIndex,indexIzq);
            thisProxy[indexIzq].acceptSwap(myValue,thisIndex+1,myValues,elementos); //2: indice derecho que se modificó cuando acepto
        }else{
            // CkPrintf("\t\t\t\t\t[%d] le DENIEGA a [%d].\n\n",thisIndex,indexIzq);
            thisProxy[indexIzq].denySwap(valueN,thisIndex,myValues,elementos); //2: indice derecho que no se modificó
        }
    }else{
        // CkPrintf("\t\t\t\t\t[%d] No estoy en misma fase que [%d] o estoy activo.          983\n\n",thisIndex,indexIzq);
        // Marcar que me llamó para que vuelva a llamar cuando yo le avise que finalicé esta fase.
        indexLlamoIzq = indexIzq;
    }
}

// Acepta y se mueve el Der
void Merge::acceptSwap(int valueN, int indexDer,int valuesN[],int elementosN){
    // Guardar el valor de la derecha en el indice de guardado
    // CkPrintf("[%d] ACCEPT\n",thisIndex);
    saveValue(valuesN,elementosN,true); //era false
    check(indexDer);
}

void Merge::check(int indexDer){
    // CkPrintf("[%d] check\n",thisIndex);
    phase--;
    cantFases--;
    // CkPrintf("[%d] cantFases:%d\n",thisIndex,cantFases);
    if(phase > 0){
        if(activo){
            if(indexLlamoIzq >= 0){
                // activo = false;
                // CkPrintf("[%d] Se desactivó en check Izq. Avisar a [%d] que me puede llamar.\n",thisIndex,indexLlamoIzq);
                // thisProxy[indexLlamoIzq].cambiarPosicion(thisIndex,false);
                thisProxy[indexLlamoIzq].startCompare(thisIndex,thisIndex,false,posicion,primero);
                indexLlamoIzq = -1;
            }
            else if(cantFases > 0){
                // CkPrintf("[%d] ---> Comienza Siguiente Fase: %d. Posicion: %d. PosicionDer: %d\n",thisIndex,phase,posicion, posicionDer);
                // cambiarPosicion(indexDer,true);
                startCompare(comparar[cantFases-1],thisIndex,false,posicion,primero);
            }
            else{
                // CkPrintf("[%d] Se desactivó definitivamente.\n",thisIndex);
                // activo = false;
            }
        }
    }
    else{
        mainProxy.terminar(myValues);
	    activo = false;
        CkPrintf("\n=============================================================================================\n");
        CkPrintf("====================================== FIN DEL PROGRAMA =====================================\n",thisIndex);
        CkPrintf("=============================================================================================\n");
    }
}

void Merge::saveValue(int valuesN[], int elementosN, bool ordenar){
    // CkPrintf("[%d]::::::: inicio saveValue :::::::elementos=%d, elementosN=%d\n",thisIndex,elementos, elementosN);
    // for(int i=0;i<elementosN;i++){
    //     CkPrintf("[%d]saveValue     myValues[%d]=%d    valuesN[%d]=%d\n",thisIndex,i,myValues[i],i,valuesN[i]);
    // }
    // CkPrintf("[%d] sizeof: %d\n",thisIndex,(elementosN)*sizeof(int));
    // if(myValues==NULL) CkPrintf("OTRO ERROR\n");
    myValues = (int *)realloc(myValues,(elementos+elementosN)*sizeof(int));
    // if( ( (int *)realloc(myValues,elementos+elementosN) )==NULL);  CkPrintf("ERROR\n");
    // myValues = (int *)malloc(sizeof(int)*(elementos+elementosN));
    memcpy(myValues+elementos,valuesN,(elementosN)*sizeof(int));
    elementos += elementosN;
    if(ordenar){
        // CkPrintf("[%d] debe ordenar elementos\n",thisIndex);
        sort(0,elementos-1,myValues);
    }
    // for(int i=0;i<elementos;i++){
    //     CkPrintf("[%d]saveValues[%d]=%d\n",thisIndex,i,myValues[i]);
    // }
    // CkPrintf("[%d]:::::::::: fin saveValue :::::::::::\n",thisIndex);
}

// Deniega y Se mueve el Índice Izquierdo
void Merge::denySwap(int value, int indexDer,int valuesN[], int elementosN){
    saveValue(valuesN,elementosN,false);
    check(indexDer);
}

void Merge::merging(int low, int mid, int high, int a[]) {
   int l1, l2, i;
   int b[numElementsLocal];

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
       if(a[l1] <= a[l2]){
            b[i] = a[l1++];
       }else{
           b[i] = a[l2++];
       }
   }

   while(l1 <= mid)
      b[i++] = a[l1++];

   while(l2 <= high)
      b[i++] = a[l2++];

   for(i = low; i <= high; i++){
      a[i] = b[i];
    }
}

void Merge::sort(int low, int high,int a[]) {
    int mid;
    if(low < high) {
        mid = (low + high) / 2;
        sort(low, mid,a);
        sort(mid+1, high,a);
        merging(low, mid, high,a);
    }else {
      return;
    }
}

void Merge::bubbleSort(int list[],int tam) {
   int temp;
   int i,j;
   bool swapped = false;
   // loop through all numbers
   for(i = 0; i < numElements*tam-1; i++) {
      swapped = false;
      // loop through numbers falling ahead
      for(j = 0; j < numElements*tam-1-i; j++) {
         if(list[j] > list[j+1]) {
            temp = list[j];
            list[j] = list[j+1];
            list[j+1] = temp;
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
