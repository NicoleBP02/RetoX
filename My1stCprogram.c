#include <stdio.h>
#include <stdlib.h>

void funcPrint(char *pstring);

int main(void){

    funcPrint("Hola Mundo Cruel!!!");
}

void funcPrint(char *pstring){
    printf("%s\n", pstring);
}