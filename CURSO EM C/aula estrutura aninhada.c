#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    printf("-------aninhadas---------\n");
    int n1,n2;
    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d",&n1);

    printf("Digite outro n�mero: ");
    fflush(stdin);
    scanf("%d",&n2);

    printf("---------------------------\n");


    if(n1>n2){
        printf("O n�mero %d � MAIOR que o n�mero %d",n1,n2);
    }else if(n1==n2){
        printf("Os n�meros %d e %d s�o IGUAIS.\n",n1,n2);
    }else{
        printf("O n�mero %d � MAIOR que o n�mero %d.\n",n2,n1);
    }
    printf("----------------------------\n");



}
