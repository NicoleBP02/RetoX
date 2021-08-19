#include <stdio.h>
#include <string.h>

int main(void)
{
    /*char name[40];
    printf("What is your name? ");
    if (fgets(name, 40, stdin) != NULL)
    {
        name[strlen(name) -1 ] = 0;
        printf("Hello %s!\n", name);
    }*/

    char age[4];
    printf("How old are you? ");
    if (fgets(age, 4, stdin) != NULL)
    {
        age[strlen(age) -1 ] = 0;
        printf("I am %s years old\n", age);
    }
    for(int i = 0; i < strlen(age);i++){
        printf("age[%d]: %c\n",i,age[i]); //age contiene chars... no se pueden hacer
                                          //operaciones con la edad porque es char
    }
}