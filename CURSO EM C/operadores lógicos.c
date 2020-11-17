#include <stdio.h>
#include <locale.h>
#include <string.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int a=4,b=3,c=5;
    printf("================================================\n");
    printf("A>B E A>C = %s\n",a>b && a>c?"VERDADEIRO":"FALSO");
    printf("A>B OU A>C = %s\n",a>b|| a>c?"VERDADEIRO":"FALSO");
    printf("================================================\n");
    printf("A>B OU A>C E NÃO FORC<=4= %s\n",a>b|| a>c && !c==4?"VERDADEIRO":"FALSO");





}
