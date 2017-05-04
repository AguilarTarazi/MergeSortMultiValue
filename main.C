/*
Agregados 3 Mayo
    cantElementsArray como variable de solo lectura
*/
#include "main.decl.h"
#include "main.decl.h"
#include "main.h"
#include "merge.decl.h"
#include <stdlib.h>
#include <time.h>

/* readonly */ CProxy_Main mainProxy;
/* readonly */ int numElements;
/* readonly */ int cantElementsArray;

Main::Main(CkArgMsg* msg) {
    //Initialize member variables
    // Read in any command-line arguments

    numElements = 4;
    cantElementsArray = 4;
    if (msg->argc > 2){
        numElements = atoi(msg->argv[1]);
        cantElementsArray = atoi(msg->argv[2]);
    }

    CkPrintf("\nCANTIDAD DE CHARES: %d\nCANTIDAD DE ELEMENTOS POR CHARE: %d\n",numElements,cantElementsArray);
    // We are done with msg so delete it.
    delete msg;

    // Set the mainProxy readonly to point to a
    //   proxy for the Main chare object (this
    //   chare object).
    mainProxy = thisProxy;

    // Create the array of Merge chare objects.
    mergeArray = CProxy_Merge::ckNew(numElements);

    // Display the array and then start the first phase
    // mergeArray.displayValue(7,str);
    // arrayDisplayFinished();
    char str[15] = "Before";
    startArrayDisplay(&Main::startNextPhase, str);
    // startNextPhase();
    CkPrintf("\n\n\n");
}

// Constructor needed for chare object migration (ignore for now)
// NOTE: This constructor does not need to appear in the ".ci" file
Main::Main(CkMigrateMessage* msg) { }

void Main::startNextPhase() {
   // Comienzan su fase (divide) solo el primero y el del medio.
   // Reciben como argumento el indice del "ultimo elemento de su array"
   inicio=CkWallTimer();	//Toma tiempo de inicio
   mergeArray[0].initPhase(numElements/2-1,numElements-1,0);
   mergeArray[numElements/2].initPhase(numElements-1,-1,0);
}

void Main::startArrayDisplay(void (Main::*cbFunc)(void), char* prefix) {
   // Set the function to execute when the display process is over
   //   (postDisplayFunc) and start displaying the values.
   postDisplayFunc = cbFunc;
   mergeArray[0].displayValue(strlen(prefix)+1, prefix);
}

void Main::terminar() {
    fin=CkWallTimer();		//Toma tiempo de fin
  char str[15] = "After ";
  startArrayDisplay(&Main::exit, str);
}

void Main::arrayDisplayFinished() {
   // If there is a post-display function to call, call it.
   if (postDisplayFunc != NULL) (this->*postDisplayFunc)();
}

void Main::exit() {
   // Exit the program
   CkPrintf("Tiempo: %f\n",fin-inicio);	//Imprime tiempos
   CkExit();
}

// Because this function is declared in a ".ci" file (main.ci in this
//   case) with the "initproc" keyword, it will be called once at startup
//   (before Main::Main()) on each physical processor.  In this case,
//   it is being used to seed the random number generator on each processor.
void processorStartupFunc() {
   // Seed rand() with a different value for each processor
   srand(time(NULL) + CkMyPe());
}

#include "main.def.h"
