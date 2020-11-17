#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int a= rand()%6;
    int b;
    printf("====ANALIZANDO NÚMEROS====\n");
    printf("Entre com um número: \n");
    scanf("%d",&b);
    fflush(stdin);
    printf("Eu pensei em %d e você em %d\n",a,b);
    if(a>b){
        printf("(A) é MAIOR");
    }if(a<b){
        printf("(B) é MAIOR");
    }else(a==b){
        printf("Eles são IGUAIS");
    }
}
