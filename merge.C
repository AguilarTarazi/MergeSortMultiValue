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
extern /* readonly */ int numElements;
extern /* readonly */ int cantElementsArray;

Merge::Merge() {
    values = (int *)malloc(sizeof(int)*cantElementsArray);
    tempos = (int *)malloc(sizeof(int)*cantElementsArray);
    cantElementsArrayLocal = cantElementsArray;
    myValue = thisIndex; //Ascendente
    myValue =  rand() % 100; //Aleatorio
    for(int i=0;i<cantElementsArrayLocal;i++){
        myValue = (cantElementsArrayLocal)*(cantElementsArrayLocal-thisIndex)-i; //Descendente
        values[i] = myValue;
    }
    tempo = myValue;
    phase = 0;
    activo = false;
    indexSave = thisIndex;
    posicion = -1;
    posicionDer = -1;
    indexLlamoIzq = -1;
    primero = -1;
    cantFases = 0;
}

// Constructor needed for chare object migration (ignore for now)
// NOTE: This constructor does not need to appear in the ".ci" file
Merge::Merge(CkMigrateMessage *msg) { }

void Merge::initPhase(int pos, int posDer, int phaseN) {
    primero = thisIndex;
    phase = phaseN;
    phase++;
    if(posDer!=-1)
    cantFases++;
    activo = true;
    // CkPrintf("Chare [%d] con POS %d, phase = %d\n",thisIndex,pos,phase);
    newNumElements = pos-thisIndex+1;
    newPos = newNumElements/2-1+thisIndex;
    if(newNumElements < 3){
        if(thisIndex != pos){
            phase++;
            cantFases++;
        }
        // CkPrintf("Chare [%d] comienza con phase = %d, y pos %d\n",thisIndex,phase,pos);
        posicion = pos;
        posicionDer = posDer; // VER SI VA ACA
        if(newNumElements==1)
        posicion = posicionDer;
        if(newNumElements>1){
            thisProxy[thisIndex+1].setPhase(phase);
        }
        startCompare(thisIndex+1,indexSave, true, posicion, primero);
    }
    else{
        thisProxy[thisIndex].initPhase(newPos,pos,phase);
        thisProxy[newPos+1].initPhase(pos,-1,phase);
    }
}

void Merge::setPhase(int phaseN){
    phase = phaseN;
}

void Merge::startCompare(int indexDer, int indexS, bool seMovioIndexDer, int posicionN, int primeroN){
    // CkPrintf("[%d] startCompare con indexDer=%d, phase=%d, posicion=%d, posicionDer=%d\n",thisIndex,indexDer,phase,posicion,posicionDer);
    //  imprimir(str);
    //ordenarSecuencial();
    for(int i=0;i<cantElementsArrayLocal;i++){
        CkPrintf("[%d]ANTES values[%d]=%d\n",thisIndex,i,values[i]);
    }
    sort(0,cantElementsArrayLocal-1,values); //Para Ordenar secuancialmente dentro de cada Chare
    // bubbleSort(values);
    for(int i=0;i<cantElementsArrayLocal;i++){
        CkPrintf("[%d]DESPUES values[%d]=%d\n",thisIndex,i,values[i]);
    }
    CkPrintf("\n\n");

    // for(int i=0;i<cantElementsArray;i++){
    //     tempos[i] = values[i];
    // }

    if(!seMovioIndexDer){
        // CkPrintf("[%d] tempo = myValue, %d<---%d\n",thisIndex,tempo,myValue);
        //if(posicion!=-1){
            // CkPrintf("[%d] tempo = myValue, %d<---%d sV3\n",thisIndex,tempo,myValue);
            tempo = myValue;
        //}
    }
    // CkPrintf("\n>>>Comparando [%d]--->v%d,t%d con [%d]    (en phase=%d, posicion=%d, posicionDer=%d)\n",thisIndex,myValue,tempo,indexDer,phase,posicion,posicionDer);
    indexSave = indexS;
    posicion = posicionN;
    primero = primeroN;
    CkPrintf("\n[%d] Comparando con [%d]    (en phase=%d) \n",thisIndex,indexDer,phase);
    thisProxy[indexDer].requestSwap(phase,tempo,thisIndex,values[numElements-1]);
}

void Merge::startComparePhase(int indexDer, int indexS, bool seMovioIndexDer, int posicionN, int primeroN, int phaseN){
    phase = phaseN;
    startCompare(indexDer,indexS,seMovioIndexDer,posicionN,primeroN);
}

void Merge::requestSwap(int phaseN, int valueN, int indexIzq,int lastValueN){
    // for(int i=0;i<cantElementsArray;i++){
    //     CkPrintf("[%d]TEMPOS[%d]=%d\n",thisIndex,i,temposN[i]);
    // }
    CkPrintf("[%d] antes de sort()\n",thisIndex);
    sort(0,cantElementsArray-1,values); //Para Ordenar secuancialmente dentro de cada Chare
    CkPrintf("[%d] despues de sort()\n",thisIndex);
    // CkPrintf("\n\t\t\t\t[%d]--->t%d:ph%d requestSwap con [%d]--->v%d:ph%d 983\n",indexIzq,valueN,phaseN,thisIndex,myValue,phase);
    // CkPrintf("Chare [%d] en requestSwap. phase:%d, phaseN:%d\n",thisIndex,phase,phaseN);
    if(phase == phaseN || !activo){
        CkPrintf("[%d]  Comparando Valores %d y %d\n",thisIndex,lastValueN,values[0]);
        if(lastValueN > values[0]){
            // phase = phaseN-1;
            // CkPrintf("\t\t\t\t\t[%d] le ACEPTA a [%d].\n\n",thisIndex,indexIzq);
            CkPrintf("\t\t[%d] ACEPTA. Llama a Chare [%d]\n",thisIndex,indexIzq);
            // thisProxy[indexIzq].compareData(values,thisIndex+1); //Le paso los datos

            thisProxy[indexIzq].acceptSwap(myValue,thisIndex+1,values); //2: indice derecho que se modificó cuando acepto

        }else{                           //TEMPO?
            CkPrintf("\t\t\t\t\t[%d] le DENIEGA a [%d].\n\n",thisIndex,indexIzq);
            // myValue = valueN;
            // CkPrintf("\t\t[%d] DENIEGA. Llama a Chare [%d]\n",thisIndex,indexIzq);
            // thisProxy[indexIzq].denySwap(valueN,thisIndex,values); //2: indice derecho que no se modificó
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
void Merge::acceptSwap(int valueN, int indexDer,int valuesN[]){
    // Guardar el valor de la derecha en el indice de guardado
    saveValue(valueN,false,valuesN); //era false
    // if(indexSave == thisIndex){
    //     // CkPrintf("[%d] guarda %d en [%d]\n",thisIndex,valueN,indexSave);
    // }else{
    //     // CkPrintf("[%d] guarda %d en [%d]\n",thisIndex,valueN,indexSave);
    //     thisProxy[indexSave].saveValue(valueN,false,valuesN);
    // }
    indexSave++;

    // Si el indice derecho no llego al final, seguir comparando
    CkPrintf("[%d]   posicion+1=%d < numElements=%d\n",thisIndex,posicion+1,numElements);
    if(posicion+1 < numElements) {
        CkPrintf("[%d]--->v%d,t%d El indice derecho no se pasó del final. Comparar con el próximo derecho: [%d].\n",thisIndex,myValue,tempo,indexDer);
          startCompare(posicion+1,indexSave,true,posicion,primero); //Se mantiene el Izq y Compara con indexDer (que ya avanzó)
        //   startCompare(indexDer,indexSave,true,posicion,primero); //Se mantiene el Izq y Compara con indexDer (que ya avanzó)
    }
    // else {
        // CkPrintf("[%d]: El indice derecho llegó al final. (indexDer=%d > posicion=%d)\n",thisIndex,indexDer,posicion);
            // if(indexSave < posicion){
            //     // CkPrintf("[%d]: Son %d elementos. El indice de guardado no llegó al final. Copiar valores restantes.\n",thisIndex,posicion+1-thisIndex);
            //     int indexIzq = thisIndex;
            //     while(indexSave <= posicion){
            //         if(indexIzq == thisIndex){
            //             indexIzq++;
            //             saveTempo(indexSave++,valuesN);
            //         }else
            //             thisProxy[indexIzq++].saveTempo(indexSave++,valuesN);  //Copia valores restantes
            //     }
            // }
            // else{
            //     // CkPrintf("[%d]: Son solo %d elementos. El indice de guardado llegó al final. (((indexSave==%d)))\n",thisIndex,posicion+1-thisIndex,indexSave);
            //     thisProxy[indexSave].saveValue(tempo,true,valuesN);  //Copia valor restante
            //     //tempo=myValue;
            // }
        check(indexDer);
    // }
}

void Merge::check(int indexDer){
    // CkPrintf("Cambio de fase abajo\n");
    phase--;
    cantFases--;
    tempo=myValue;
    // CkPrintf("[%d]\t\t LLEGUE A FASE CERO VIEJAAA 1503\n",thisIndex);
    // thisProxy[indexDer-1].setPhase(phase); // Le cambio la fase
    // imprimir("NF");
    if(phase > 0){
        if(activo){
            if(indexLlamoIzq >= 0){
                activo = false;
                // CkPrintf("[%d] Se desactivó en check Izq. Avisar a [%d] que me puede llamar.\n",thisIndex,indexLlamoIzq);
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
                // CkPrintf("[%d] Se desactivó definitivamente.\n",thisIndex);
                activo = false;
            }
        }
    }
    else{
        if(phase==0 && activo)
            mainProxy.terminar();
	      activo = false;
        CkPrintf("\n=============================================================================================\n");
        CkPrintf("[%d] =================================== FIN DEL PROGRAMA ====================================\n",thisIndex);
        CkPrintf("  =============================================================================================\n");
    }
}

void Merge::saveValue(int value, bool deboCopiarTempo, int valuesN[]){

    CkPrintf("[%d]::::::: inicio saveValue :::::::%d\n",thisIndex,cantElementsArrayLocal);
    cantElementsArrayLocal *=2;
    // values = (int *)realloc(values, cantElementsArrayLocal);       //Solucionar
    memcpy(values+cantElementsArrayLocal/2,valuesN,(cantElementsArrayLocal/2)*sizeof(int));

    // int random =  rand() % 100;
    // Si son solo dos elementos, le guardo el valor del izquierdo
    if(deboCopiarTempo){
        // CkPrintf("[%d] tempo = value, %d<---%d sV1\n",thisIndex,tempo,value);
        tempo = value;
    }
    else{
        // CkPrintf("[%d] tempo = myValue, %d<---%d sV2\n",thisIndex,tempo,myValue);
        tempo = myValue;
    }
    // CkPrintf("[%d]>> Cambiando valor de %d a %d. (%d)        988\n",thisIndex,myValue,value,random);
    myValue = value;

    CkPrintf("[%d]:::::::::: fin saveValue :::::::::::\n",thisIndex);
    // for(int i=0;i<numElements;i++){
    //     thisProxy[i].imprimir("A");
    // }
}
void Merge::saveTempo(int indexSave,int valuesN[]){
    // CkPrintf("[%d] Cambiando TEMPO valor de [%d] a v%d,t%d.\n",thisIndex,indexSave,myValue,tempo);
    thisProxy[indexSave].saveValue(tempo,false,valuesN); //DEFAULT
}


// Deniega y Se mueve el Índice Izquierdo
void Merge::denySwap(int value, int indexDer,int valuesN[]){
    // CkPrintf("[%d] en denySwap con indexSave=%d, y con primero=%d\n",thisIndex,indexSave,primero);
    if(indexSave != thisIndex){
    //     CkPrintf("[%d] guarda %d en [%d]\n",thisIndex,value,indexSave);
    //     saveValue(value,false); //VER SI ELIMINAR O NO. PROBABLEMENTE SI
    // }else{
        // CkPrintf("[%d] guarda %d en [%d]\n",thisIndex,value,indexSave);
        thisProxy[indexSave].saveValue(value,false,valuesN);
    }
    indexSave++;
    // CkPrintf("[%d] ¿ thisIndex+1-primero=%d <= (posicion-primero)/2=%d ?\n",thisIndex,thisIndex+1-primero,(posicion-primero)/2);
    // CkPrintf("%d = %d ?\n",thisIndex+1,posicion);
    // CkPrintf("[%d] ¿ thisIndex+1-primero=%d <= round(posicion-primero)/2=%f ?\n",thisIndex,thisIndex+1-primero,round((posicion-primero)/2));
    if( (thisIndex+1-primero) < (round(posicion-primero)/2.0)){
    // if( (thisIndex+1-primero) < (posicion-primero)/2){
    // if( thisIndex+1 <= posicion){
        // phase--;
        // CkPrintf("\t\t\t\t\t\t\t\t\t\t[%d] cambia phase a %d\n",thisIndex,phase);
        // cantFases--;
        // if(thisIndex!=primero || thisIndex==primero && cantFases==0)
        //     activo = false;
        // CkPrintf("[%d] con indexDer:%d indexSave:%d posicion:%d primero:%d phase:%d\n",thisIndex,indexDer,indexSave,posicion,primero,phase);
        if(indexSave==thisIndex+1){
            // CkPrintf("[%d] llama con FALSE a [%d]\n",thisIndex,thisIndex+1);
            thisProxy[thisIndex+1].startComparePhase(indexDer,indexSave,false,posicion,primero,phase);  //Muevo izquierdo.  //TRUE
        }
        else{
            // CkPrintf("[%d] llama con TRUE a [%d]\n",thisIndex,thisIndex+1);
            thisProxy[thisIndex+1].startComparePhase(indexDer,indexSave,true,posicion,primero,phase);  //Muevo izquierdo.  //TRUE
        }
    }
    else{
        indexDer = posicion+1;
        thisProxy[primero].check(indexDer);
    }
}

void Merge::cambiarPosicion(int indexDer, bool meLlamoYo){
    if(meLlamoYo){
        // CkPrintf("[%d] Cambia su posicion %d a %d-------------------------------------------------------------****\n",thisIndex,posicion,posicionDer);
        posicion = posicionDer;
    }

    // CkPrintf("[%d] cambiarPosicion------------888-------posicion+1 %d------------posicionDer+1=%d y indexDer=%d-----------------------------985-------------****\n",thisIndex,posicion+1,posicionDer+1,indexDer);
    if(posicion>-1 && posicion<numElements-1)
    thisProxy[posicion+1].solicitarPosicionDer(thisIndex,indexDer,phase);
    else{
        CkPrintf("[%d] cambiarPosicion  posicion+1=%d < numElements=%d\n",thisIndex,posicion+1,numElements);
        if(posicion+1 < numElements)
            startCompare(posicion+1,thisIndex,false,posicion,primero);
    }
}

void Merge::solicitarPosicionDer(int indexN, int indexDer, int phaseN){
    //CkPrintf("Entrando a solicitarPosicionDer::: [%d] phase=%d,    [%d] phaseN=%d     estoyAc=%d                9867 Ingreso\n",thisIndex,phase,indexN,phaseN,estoyActualizando);
    if(phaseN == phase){
        //CkPrintf("[%d] %d < %d ? ++++++++++++++++p%d numElements%d indexN%d p%d +++++++++++++++ 986A Env\n",thisIndex,posicion,(numElements-indexN)/(phase-1),posicion,numElements,indexN,phase-1);
        thisProxy[indexN].cambiarPosicionDer(posicion,indexDer);
    }
    else
        thisProxy[indexN].cambiarPosicionDer(posicionDer,indexDer);
    // imprimir(str);
}

void Merge::cambiarPosicionDer(int posicionDerN, int indexDer){
    posicionDer = posicionDerN;
    // CkPrintf("[%d] Cambia posicionDer=%d      9867\n",thisIndex,posicionDer);
    CkPrintf("[%d] cambiarPosicionDer  posicion+1=%d < numElements=%d\n",thisIndex,posicion+1,numElements);
    if(posicion+1 < numElements)
        startCompare(posicion+1,thisIndex,true,posicion,primero);
}


void Merge::imprimir(char* prefix) {
    // if (thisIndex < numElements - 1) {
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
    if (thisIndex < numElements - 1) {
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
   int b[cantElementsArrayLocal];

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
    //   CkPrintf("[%d]    a[%d]:%d    tempos[%d]:%d\n",thisIndex,i,a[i],i,tempos[i]);
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
   for(i = 0; i < cantElementsArray*tam-1; i++) {
      swapped = false;
      // loop through numbers falling ahead
      for(j = 0; j < cantElementsArray*tam-1-i; j++) {
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
