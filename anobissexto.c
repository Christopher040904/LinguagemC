#include <stdio.h>

int main(){
    
    int num;
    printf("Digite o ano e lhe diremos se é bissexto ou não\n");
    scanf("%d",&num);
    if(num % 4 == 0)
        printf("O ano %d é bissexto\n",num);
    else
        printf("O ano %d não é bissexto\n",num);

return 0;
}