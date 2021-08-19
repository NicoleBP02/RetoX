#include <stdio.h>
#include <stdlib.h>

float promedio(int array[], int size);

int main(void){
    int arr[] = {5,4,3,2,6,7,3,12,8,1};
    int s = sizeof(arr)/sizeof(arr[0]);
    //printf("size del arreglo:%i\n",s);
    float res = promedio(arr,s);

    printf("El promedio de los elementos del arreglo es: %.6f\n", res);

}

float promedio(int array[], int size){
    float p = 0;
    for(int i = 0; i < size; i++){
        p += *(array + i);
    }
    //printf("p: %.6f\n", p);
    p/=size; 
    //printf("p: %.6f\n", p);
    return p;
}