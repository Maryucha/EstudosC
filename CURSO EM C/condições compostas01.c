#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("-----CONDI��O COMPOSTA-----\n");
    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d",&num);
    if(num%2==0){
        printf("O n�mero %d � PAR!",num);
    }else{
        printf("O n�mero %d � �MPAR!",num);
    }
}
