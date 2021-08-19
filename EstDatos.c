#include <stdio.h>

struct Point{
    int x;
    int y;
};

struct rectangle{
    struct Point pt1;
    struct Point pt2;
};

int main()
{
    struct Point p1 = {10, 20};
    struct Point p2 = p1; //el contenido de p1 SE COPIA en p2.
    printf(" p2.x = %d, p2.y = %d\n", p2.x, p2.y);

/* Esto es un error... no se pueden comparar dos struct con == se tiene que comparar elemento por elemento
    if(p1 == p2){
        printf("p1 is equal to p2\n");
    }*/

    if(p1.x == p2.x && p1.y == p2.y){
        printf("p1 is equal to p2\n");
    }

    return 0;
}