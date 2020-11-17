#include <stdio.h>
#include <locale.h>
#include <string.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int ano;
    printf("-----------------------ANO BISSEXTO----------------------\n");
    printf("\n");
    printf("Digite o ano que deseja saber se foi ou será ano bissexto: ");
    fflush(stdin);
    scanf("%d",&ano);
    printf("---------------------------------------------------------\n");
    if (ano%4==0 && ano%100!=0 || ano%400==0){
        printf("Esse ano É Bissexto!\n");
    }else{
        printf("Esse ano NÃO é Bissexto!");
    }





}
