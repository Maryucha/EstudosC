#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    printf("-------aninhadas---------\n");
    int n1,n2;
    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d",&n1);

    printf("Digite outro número: ");
    fflush(stdin);
    scanf("%d",&n2);

    printf("---------------------------\n");


    if(n1>n2){
        printf("O número %d é MAIOR que o número %d",n1,n2);
    }else if(n1==n2){
        printf("Os números %d e %d são IGUAIS.\n",n1,n2);
    }else{
        printf("O número %d é MAIOR que o número %d.\n",n2,n1);
    }
    printf("----------------------------\n");



}
