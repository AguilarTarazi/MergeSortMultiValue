#include <stdlib.h>

void main(int argc, char *argv[]){
    int numElements;
    if (argc > 1)
        numElements = atoi(argv[1]);
    int *values = (int *)calloc(numElements,sizeof(int));
}
