/**#include <stdio.h>

#define M 5
#define C 5

int main(int argc, char* argv[]) {
    int x = 2;
    int y = x*M + C;
    printf("%d\n",y);
    return 0;
}


#include <stdio.h>
#define M 5
#define C 5
#define MAP(val,m,c) x*m+c

int main(int argc, char* argv[]) {
    int x = 2;
    int y = MAP(x,M,C);
    printf("y: %d\n", y);
    return 0;
}*/

#include <stdio.h>


int main(int argc, char* argv[]) {

    #ifdef CONDITION
    printf("CODIGO IF\n");
    #else
    printf("CODIGO ELSE\n");
    #endif
    return 0;
}
