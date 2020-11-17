#include <stdio.h>
#include <locale.h>
#include <string.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("====OPERADOR DE DESLOCAMENTO <<====\n");
    printf("OPERADOR DE DESLOCAMENTO >>>= 12<<2\n");
    int m=12<<3;
    printf("%d\n",m);
    printf("\n");
    printf("====OPERADOR DE DESLOCAMENTO >>====\n");
    printf("OPERADOR DE DESLOCAMENTO <<= 12>>2\n");
    int n=12>>2;
    printf("%d\n",n);
    printf("\n");
    int x=15<<1;//soma 2 para esquerda
    int y=43>>3;//tira 3 da direira
    printf("%d\n",x);
    printf("%d\n",y);
}
