#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int num,res;
    printf("-------ANALIZAR NUMERO--------------\n");
    printf("Digite um número positivo ou negativo\n");
    fflush(stdin);
    scanf("%d",&num);
    if (num>0){
            printf("O número %d é POSITIVO!",num);
    }else if(num==0){
        printf("O número %d é NULO!",num);
    }else{
        printf("O número %d é NEGATIVO!",num);
    }
}
