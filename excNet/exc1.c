#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int num;
    printf("--------- DIVISIVEIS -----------\n");
    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d",&num);
    if(num%5==0&&num%3==0){
        printf("Esse n�mero � divissivel por 5 e por 3.\n");
    }else if(num%5==0&&num%3!=0){
        printf("Esse n�mero � divissivel apenas por 5.\n");
    }else if(num%5!=0&&num%3==0){
        printf("Esse n�mero � divissivel apenas por 3.\n");
    }else{
        printf("Esse n�mero n�o � divissivel por 5 e por 3.\n");
    }



}
