#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("-----CONDIÇÃO COMPOSTA-----\n");
    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d",&num);
    if(num%2==0){
        printf("O número %d é PAR!",num);
    }else{
        printf("O número %d é ÍMPAR!",num);
    }
}
