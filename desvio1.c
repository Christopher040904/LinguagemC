#include <stdio.h>

int main(){
    int num;
    printf("Digite um número:\n");
    scanf("%d",&num);
    if(num > 10)
        printf("O número digitado é maior que 10\n");
    else
        printf("O numero digitado é menor ou igual a 10\n");
return 0;        
}