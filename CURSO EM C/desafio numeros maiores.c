#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int a= rand()%6;
    int b;
    printf("====ANALIZANDO N�MEROS====\n");
    printf("Entre com um n�mero: \n");
    scanf("%d",&b);
    fflush(stdin);
    printf("Eu pensei em %d e voc� em %d\n",a,b);
    if(a>b){
        printf("(A) � MAIOR");
    }if(a<b){
        printf("(B) � MAIOR");
    }else(a==b){
        printf("Eles s�o IGUAIS");
    }
}
