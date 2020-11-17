#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int menu,n1,n2,soma;
    float raiz1,raiz2;

    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d",&n1);

    printf("Digite outro número: ");
    fflush(stdin);
    scanf("%d",&n2);

    printf("---------------MENU-------------------\n");
    printf("1: SOMA\n");
    printf("2: RAÍZ\n");
    printf("======================================\n");
    printf("Escolha uma opção: ");
    fflush(stdin);
    scanf("%d",&menu);
    printf("--------------------------------------\n");
    switch(menu){
case 1:
    soma=n1+n2;
    printf("A SOMA de %d e %d é %d.\n",n1,n2,soma);
    break;
case 2:
    raiz1=sqrt(n1);
    raiz2=sqrt(n2);
    printf("A RAÍZ de %d é %.2f.\n",n1,raiz1);
    printf("A RAÍZ de %d é %.2f.\n",n2,raiz2);
    break;
default:
    printf("Opção invalida!\n");
    break;
    }
    printf("======================================\n");


}
