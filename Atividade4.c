#include <stdio.h>

int main() //função principal
{
    char sentence[] = "data : 06-06-2012"; 
    char str[50]; 
    int day, month, year; 

    
    sscanf(sentence, "%s : %2d-%2d-%4d", str, &day, &month, &year); 
   
    printf("%s -> %02d-%02d-%4d\n", str, day, month, year);
                
    return 0;
}