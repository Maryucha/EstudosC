#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int num,res;
    printf("-------ANALIZAR NUMERO--------------\n");
    printf("Digite um n�mero positivo ou negativo\n");
    fflush(stdin);
    scanf("%d",&num);
    if (num>0){
            printf("O n�mero %d � POSITIVO!",num);
    }else if(num==0){
        printf("O n�mero %d � NULO!",num);
    }else{
        printf("O n�mero %d � NEGATIVO!",num);
    }
}
