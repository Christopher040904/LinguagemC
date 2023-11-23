#include <stdlib.h>
#include "mat.h"

int main(){
    system("clear");
    int num[10] = {18,24,33,63,28,96,54,30,98,66};
    printf("A soma dos valores é %d\n",soma(num,10));
    printf("O maior valor é %d\n",max(num,10));
    return 0;
};