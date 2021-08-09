#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[] = {1,2,3,4};
    //printf("sizeof(arr): %ld\n", sizeof(arr)/sizeof(int));
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    //- arr: el nombre del arreglo es la dirección del 1er
    // elemento del arreglo.
    //- ¿Cuál es el tipo del 1er elemento del arreglo? int
    //--> arr es de tipo int *

    int *parr = arr; 
    int (*pparr)[sizeof(arr)/sizeof(int)] = &arr; // &arr es la dirección de un arreglo de 4 enteros

    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        printf("arr[%d]: %d\n", i, parr);
    }

    return EXIT_SUCCESS; 

}