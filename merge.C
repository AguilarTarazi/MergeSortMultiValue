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
    tempos = (int *)malloc(sizeof(int)*numElements);
    numElementsLocal = numElements;
    myValue = thisIndex; //Ascendente
    myValue =  rand() % 100; //Aleatorio
    // for(int i=0;i<numElementsLocal;i++){
    //     myValue = (numElementsLocal)*(numElementsLocal-thisIndex)-i; //Descendente
    //     myValues[i] = myValue;
    // }
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
}

// Constructor needed for chare object migration (ignore for now)
// NOTE: This constructor does not need to appear in the ".ci" file
Merge::Merge(CkMigrateMessage *msg) { }

void Merge::initPhase(int pos, int posDer, int phaseN, int values[],int tam) {
    elementos = tam;
    CkPrintf("[%d]  TAM: %d\n",thisIndex,elementos);
    // for(int i=0;i<elementos;i++)
    //     CkPrintf("[%d] NoOrdenado[%d]: %d\n",thisIndex,i,myValues[i]);
    int valuesIzq[elementos/2];
    int valuesDer[elementos-elementos/2];
    memcpy(valuesIzq,values,(elementos/2)*sizeof(int));
    memcpy(valuesDer,values+elementos/2,(elementos-elementos/2)*sizeof(int));
    primero = thisIndex;
    phase = phaseN;
    phase++;
    if(posDer!=-1)
        cantFases++;
    CkPrintf("Chare [%d] con pos=%d, phase=%d, tam=%d\n",thisIndex,pos,phase,elementos);
    newcantChares = pos-thisIndex+1;
    newPos = newcantChares/2-1+thisIndex;
    if(newcantChares < 2){
        // if(thisIndex != pos){
        //     phase++;
        //     cantFases++;
        // }
        posicion = pos; //BORRARLO
        posicionDer = posDer; // VER SI VA ACA
        // if(newcantChares==1)
        posicion = posicionDer;
        // if(newcantChares>1){
        //     thisProxy[thisIndex+1].setPhase(phase);
        // }
        myValues = (int *)malloc(sizeof(int)*elementos);
        memcpy(myValues,values,(elementos)*sizeof(int));        //Se copian los valores en variable local
        if(posicion!=-1){
            CkPrintf("Chare [%d] comienza con phase = %d, y pos %d\n",thisIndex,phase,pos);
            activo = true;
            sort(0,elementos-1,myValues);
            // for(int i=0;i<elementos;i++)
            //     CkPrintf("[%d] ordenado[%d]: %d\n",thisIndex,i,myValues[i]);
            startCompare(thisIndex+1,indexSave, true, posicion, primero);
        }
        else{
            CkPrintf("[%d] else de la 91\n",thisIndex);
            phase--;
            sort(0,elementos-1,myValues);
            phase++;
            // for(int i=0;i<elementos;i++)
            //     CkPrintf("[%d] ordenado[%d]: %d\n",thisIndex,i,myValues[i]);
        }
    }
    else{
        CkPrintf("[%d] Divide con newPos=%d, pos=%d, phase=%d, elementos/2=%d\n",thisIndex,newPos,pos,phase,elementos/2);
        thisProxy[thisIndex].initPhase(newPos,pos,phase,valuesIzq,elementos/2);
        CkPrintf("[%d] Divide con pos=%d, -1, phase=%d, elementos-elementos/2=%d\n",thisIndex,pos,phase,elementos-elementos/2);
        thisProxy[newPos+1].initPhase(pos,-1,phase,valuesDer,elementos-elementos/2);
    }
}

void Merge::setPhase(int phaseN){
    phase = phaseN;
}

void Merge::startCompare(int indexDer, int indexS, bool seMovioIndexDer, int posicionN, int primeroN){
    CkPrintf("[%d] startCompare con indexDer=%d, phase=%d, posicion=%d, posicionDer=%d ",thisIndex,indexDer,phase,posicion,posicionDer);
    CkPrintf("elementos=%d, activo=%d\n",elementos,activo);
    //  imprimir(str);
    //ordenarSecuencial();

    // for(int i=0;i<numElementsLocal;i++){
    //     CkPrintf("[%d]ANTES values[%d]=%d\n",thisIndex,i,values[i]);
    // }
    //  sort(0,elementos-1,myValues); //Para Ordenar secuancialmente dentro de cada Chare
    // bubbleSort(values);
    // for(int i=0;i<numElementsLocal;i++){
    //     CkPrintf("[%d]DESPUES values[%d]=%d\n",thisIndex,i,values[i]);
    // }

    // for(int i=0;i<cantElementsArray;i++){
    //     tempos[i] = values[i];
    // }

    // if(!seMovioIndexDer){
    //     // CkPrintf("[%d] tempo = myValue, %d<---%d\n",thisIndex,tempo,myValue);
    //     //if(posicion!=-1){
    //         // CkPrintf("[%d] tempo = myValue, %d<---%d sV3\n",thisIndex,tempo,myValue);
    //         tempo = myValue;
    //     //}
    // }
    // CkPrintf("\n>>>Comparando [%d]--->v%d,t%d con [%d]    (en phase=%d, posicion=%d, posicionDer=%d)\n",thisIndex,myValue,tempo,indexDer,phase,posicion,posicionDer);
    indexSave = indexS;
    posicion = posicionN;
    primero = primeroN;
    CkPrintf("\n[%d] Comparando con [%d]    (en phase=%d) %d\n",thisIndex,indexDer,phase,elementos-1);
    thisProxy[indexDer].requestSwap(phase,tempo,thisIndex,myValues[elementos-1]);
}

void Merge::startComparePhase(int indexDer, int indexS, bool seMovioIndexDer, int posicionN, int primeroN, int phaseN){
    phase = phaseN;
    startCompare(indexDer,indexS,seMovioIndexDer,posicionN,primeroN);
}

void Merge::requestSwap(int phaseN, int valueN, int indexIzq,int lastValueN){
    CkPrintf("[%d] en requestSwap\n",thisIndex);
    // CkPrintf("[%d] en requestSwap %d\n",thisIndex, myValues[0]);
    // for(int i=0;i<cantElementsArray;i++){
    //     CkPrintf("[%d]TEMPOS[%d]=%d\n",thisIndex,i,temposN[i]);
    // }
    // for(int i=0;i<elementos;i++)
    //     CkPrintf("[%d] requestSwap[%d]: %d\n",thisIndex,i,myValues[i]);

    // CkPrintf("[%d] antes de sort()\n",thisIndex);
    // sort(0,numElements-1,myValues); //Para Ordenar secuancialmente dentro de cada Chare
    // CkPrintf("[%d] despues de sort()\n",thisIndex);
    // CkPrintf("\n\t\t\t\t[%d]--->t%d:ph%d requestSwap con [%d]--->v%d:ph%d 983\n",indexIzq,valueN,phaseN,thisIndex,myValue,phase);
    // CkPrintf("Chare [%d] en requestSwap. phase:%d, phaseN:%d\n",thisIndex,phase,phaseN);
    if((phase == phaseN || !activo) && myValues!=NULL){
        CkPrintf("[%d]  Comparando Valores %d y %d\n",thisIndex,lastValueN,myValues[0]);
        if(lastValueN > myValues[0]){
            // phase = phaseN-1;
            // CkPrintf("\t\t\t\t\t[%d] le ACEPTA a [%d].\n\n",thisIndex,indexIzq);
            CkPrintf("\t\t[%d] ACEPTA. Llama a Chare [%d]\n",thisIndex,indexIzq);
            // thisProxy[indexIzq].compareData(values,thisIndex+1); //Le paso los datos

            thisProxy[indexIzq].acceptSwap(myValue,thisIndex+1,myValues,elementos); //2: indice derecho que se modificó cuando acepto

        }else{                           //TEMPO?
            CkPrintf("\t\t\t\t\t[%d] le DENIEGA a [%d].\n\n",thisIndex,indexIzq);
            // myValue = valueN;
            // CkPrintf("\t\t[%d] DENIEGA. Llama a Chare [%d]\n",thisIndex,indexIzq);
            thisProxy[indexIzq].denySwap(valueN,thisIndex,myValues,elementos); //2: indice derecho que no se modificó
        }
    }else{
        // CkPrintf("\t\t\t\t\t[%d] No estoy en misma fase que [%d] o estoy activo.          983\n\n",thisIndex,indexIzq);
        // Marcar que me llamó para que vuelva a llamar cuando yo le avise que finalicé esta fase.
        indexLlamoIzq = indexIzq;
    }
}

// void Merge::compareData(int valores[],int indexDer){
//     values = (int *)realloc(values, cantElementsArray*2);       //Solucionar
//     memcpy(values+cantElementsArray,valores,cantElementsArray*sizeof(int));
//     // for(int i=cantElementsArray,j=0;i<cantElementsArray*2,j<cantElementsArray;i++,j++){
//     //     values[i] = valores[j];
//     // }
//     // CkExit();
//     for(int i=0;i<cantElementsArray*2;i++){
//         CkPrintf("[%d]ANTES values[%d]=%d\n",thisIndex,i,values[i]);
//     }
//     sort(0,7,values); //Para Ordenar secuancialmente dentro de cada Chare
//     // bubbleSort(values,2);//ver aRGUMENTOS
//     for(int i=0;i<cantElementsArray*2;i++){
//         CkPrintf("[%d]DESPUES values[%d]=%d\n",thisIndex,i,values[i]);
//     }
//     CkPrintf("\n\n");
//
//
//     CkExit();
// }

// Acepta y se mueve el Der
void Merge::acceptSwap(int valueN, int indexDer,int valuesN[],int elementosN){
    // Guardar el valor de la derecha en el indice de guardado
    saveValue(valuesN,elementosN,true); //era false

    check(indexDer);
    // }
}

void Merge::check(int indexDer){
    // CkPrintf("Cambio de fase abajo\n");
    phase--;
    cantFases--;
    // tempo=myValue;
    // CkPrintf("[%d]\t\t LLEGUE A FASE CERO VIEJAAA 1503\n",thisIndex);
    // thisProxy[indexDer-1].setPhase(phase); // Le cambio la fase
    // imprimir("NF");
    CkPrintf("[%d] check\n",thisIndex);
    if(phase > 0){
        if(activo){
            if(indexLlamoIzq >= 0){
                activo = false;
                CkPrintf("[%d] Se desactivó en check Izq. Avisar a [%d] que me puede llamar.\n",thisIndex,indexLlamoIzq);
                thisProxy[indexLlamoIzq].cambiarPosicion(thisIndex,false);
                // thisProxy[indexLlamoIzq].startCompare(thisIndex,indexLlamoIzq,false);
                indexLlamoIzq = -1;
            }
            else if(cantFases > 0){
                // else if(posicionDer > 0 && activo){
                CkPrintf("[%d] ---> Comienza Siguiente Fase: %d.\n",thisIndex,phase);
                cambiarPosicion(indexDer,true);
            }
            else{
                CkPrintf("[%d] Se desactivó definitivamente.\n",thisIndex);
                activo = false;
            }
        }
    }
    else{
        // if(thisIndex==0 && elementos==numElements)
            mainProxy.terminar(myValues);
	    activo = false;
        CkPrintf("\n=============================================================================================\n");
        CkPrintf("[%d] =================================== FIN DEL PROGRAMA ====================================\n",thisIndex);
        CkPrintf("  =============================================================================================\n");
    }
}

void Merge::saveValue(int valuesN[], int elementosN, bool ordenar){

    CkPrintf("[%d]::::::: inicio saveValue :::::::elementos=%d, elementosN=%d\n",thisIndex,elementos, elementosN);
    CkPrintf("[%d] sizeof: %d\n",(elementosN)*sizeof(int));
    // if(myValues==NULL) CkPrintf("OTRO ERROR\n");
    myValues = (int *)realloc(myValues,(elementos+elementosN)*sizeof(int));
    // if( ( (int *)realloc(myValues,elementos+elementosN) )==NULL);  CkPrintf("ERROR\n");
    // myValues = (int *)malloc(sizeof(int)*(elementos+elementosN));
    memcpy(myValues+elementos,valuesN,(elementosN)*sizeof(int));
    // for(int i=elementos,j=0;i<elementos+elementosN, j<elementosN;i++,j++)
    //     myValues[i] = valuesN[j];
    elementos += elementosN;
    if(ordenar){
        CkPrintf("[%d] debe ordenar elementos\n",thisIndex);
        sort(0,elementos-1,myValues);
    }
    for(int i=0;i<elementos;i++){
        CkPrintf("[%d]saveValues[%d]=%d\n",thisIndex,i,myValues[i]);
    }

    CkPrintf("[%d]:::::::::: fin saveValue :::::::::::\n",thisIndex);

}
// void Merge::saveTempo(int indexSave,int valuesN[]){
//     // CkPrintf("[%d] Cambiando TEMPO valor de [%d] a v%d,t%d.\n",thisIndex,indexSave,myValue,tempo);
//     thisProxy[indexSave].saveValue(tempo,false,valuesN,elementos); //DEFAULT
// }


// Deniega y Se mueve el Índice Izquierdo
void Merge::denySwap(int value, int indexDer,int valuesN[], int elementosN){
    // CkPrintf("[%d] en denySwap con indexSave=%d, y con primero=%d\n",thisIndex,indexSave,primero);
    saveValue(valuesN,elementosN,false);
    CkPrintf("[%d] en deny despues de swap\n",thisIndex);
    check(indexDer);
}

void Merge::cambiarPosicion(int indexDer, bool meLlamoYo){
    CkPrintf("[%d] cambiarposicion\n",thisIndex);
    if(meLlamoYo){
        CkPrintf("[%d] Cambia su posicion %d a %d-------------------------------------------------------------****\n",thisIndex,posicion,posicionDer);
        posicion = posicionDer;
    }

    // CkPrintf("[%d] cambiarPosicion------------888-------posicion+1 %d------------posicionDer+1=%d y indexDer=%d-----------------------------985-------------****\n",thisIndex,posicion+1,posicionDer+1,indexDer);
    if(posicion>-1 && posicion<cantChares-1){
        CkPrintf("[%d] va a solicitarPosicionDer a [%d], proceso=%d\n",thisIndex,posicion+1,getpid());
        thisProxy[posicion+1].solicitarPosicionDer(thisIndex,indexDer,phase);
        CkPrintf("[%d] va a solicitarPosicionDer a [%d], proceso=%d\n",thisIndex,posicion+1,getpid());
    }
    else{
        CkPrintf("[%d] cambiarPosicion  posicion+1=%d < cantChares=%d\n",thisIndex,posicion+1,cantChares);
        if(indexDer < cantChares)
            startCompare(indexDer,thisIndex,false,posicion,primero);
    }
}

void Merge::solicitarPosicionDer(int indexN, int indexDer, int phaseN){
    CkPrintf("Entrando a solicitarPosicionDer::: [%d] phase=%d,    [%d] phaseN=%d   9867 Ingreso\n",thisIndex,phase,indexN,phaseN);

    if(phaseN == phase){
        //CkPrintf("[%d] %d < %d ? ++++++++++++++++p%d cantChares%d indexN%d p%d +++++++++++++++ 986A Env\n",thisIndex,posicion,(cantChares-indexN)/(phase-1),posicion,cantChares,indexN,phase-1);
        thisProxy[indexN].cambiarPosicionDer(posicion,indexDer);
    }
    else
        thisProxy[indexN].cambiarPosicionDer(posicionDer,indexDer);
    // imprimir(str);
}

void Merge::cambiarPosicionDer(int posicionDerN, int indexDer){
    posicionDer = posicionDerN;
    CkPrintf("[%d] Cambia posicionDer=%d      9867\n",thisIndex,posicionDer);
    CkPrintf("[%d] cambiarPosicionDer  posicion+1=%d < cantChares=%d\n",thisIndex,posicion+1,cantChares);
    if(posicion+1 < cantChares)
        startCompare(posicion+1,thisIndex,true,posicion,primero);
}


void Merge::imprimir(char* prefix) {
    // if (thisIndex < cantChares - 1) {
    prefix[strlen(prefix)-1]='\0';
        CkPrintf("%s Merge[%d] =\t\t>>> v(%d) <<<\t\tt %d (p %d --- pd %d --- ph %d ) \n",prefix,thisIndex, myValue, tempo, posicion, posicionDer,phase);
        // thisProxy[thisIndex + 1].imprimir(prefix);
    //  else {
        // CkPrintf("%s Merge[%d] =\t\t>>> v(%d) <<<\t\tt %d (p %d --- pd %d --- ph %d )                  (999)\n",prefix,thisIndex, myValue, tempo, posicion, posicionDer,phase);
    // }
}

// Display the value
void Merge::displayValue(int prefixLen, char* prefix) {
    prefix[prefixLen] = '\0';
    if (thisIndex < cantChares - 1) {
        CkPrintf("%s Merge[%d] =\t\t>>> v(%d) \n"/*<<<\t\tt %d (p %d --- pd %d --- ph %d )\n"*/,prefix,thisIndex, myValue);//, tempo, posicion, posicionDer,phase);
        thisProxy[thisIndex + 1].displayValue(prefixLen, prefix);
    } else {
        CkPrintf("%s Merge[%d] =\t\t>>> v(%d) \n"/*"<<<\t\tt %d (p %d --- pd %d --- ph %d )\n"*/,prefix,thisIndex, myValue);//, tempo, posicion, posicionDer,phase);
        mainProxy.arrayDisplayFinished();
    }
}

void Merge::merging(int low, int mid, int high, int a[]) {
   int l1, l2, i;
   // int a[4];
   // for(int j=0;j<4;j++)
   //      a[j]=values[j];
   int b[numElementsLocal];

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }

   while(l1 <= mid)
      b[i++] = a[l1++];

   while(l2 <= high)
      b[i++] = a[l2++];

   for(i = low; i <= high; i++){
      a[i] = b[i];
      tempos[i] = a[i];
    }

}

void Merge::sort(int low, int high,int a[]) {
    int mid;
    if(low < high) {
        mid = (low + high) / 2;
        sort(low, mid,a);
        sort(mid+1, high,a);
        merging(low, mid, high,a);
   } else {
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
