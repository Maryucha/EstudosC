#include <stdio.h>
#include <locale.h>
#include <string.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("====OPERADOR DE CONJUN플O====\n");
    printf("OPERADOR DE CONJUN플O= 25&12\n");
    int m=25&12;
    printf("%d\n",m);
    printf("\n");
    printf("====OPERADOR DE DISJUN플O====\n");
    printf("OPERADOR DE DISJUN플O= 25|12\n");
    int n=25|12;
    printf("%d\n",n);
    printf("\n");
    printf("====OPERADOR DE DISJUN플O EXCLUSIVA====\n");
    printf("OPERADOR DE DISJUN플O EXCLUSIVA= 25^12\n");
    int o=25^12;
    printf("%d\n",o);
    printf("====EXERCICIOS====\n");
    printf("OPERADOR DE CONJUN플O= 15&5\n");
    int p=15&5;
    printf("%d\n",p);
    printf("\n");
    printf("====EXERCICIOS====\n");
    printf("OPERADOR DE DISJUN플O= 27|7\n");
    int q=27|17;
    printf("%d\n",q);
    printf("\n");
    printf("====EXERCICIOS====\n");
    printf("OPERADOR DE DISJUN플O EXCLUSIVA=15^7\n");
    int r=15^7;
    printf("%d\n",r);
    printf("\n");
}
