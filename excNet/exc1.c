#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int num;
    printf("--------- DIVISIVEIS -----------\n");
    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d",&num);
    if(num%5==0&&num%3==0){
        printf("Esse número é divissivel por 5 e por 3.\n");
    }else if(num%5==0&&num%3!=0){
        printf("Esse número é divissivel apenas por 5.\n");
    }else if(num%5!=0&&num%3==0){
        printf("Esse número é divissivel apenas por 3.\n");
    }else{
        printf("Esse número não é divissivel por 5 e por 3.\n");
    }



}
