#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int menu,n1,n2,soma;
    float raiz1,raiz2;

    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d",&n1);

    printf("Digite outro n�mero: ");
    fflush(stdin);
    scanf("%d",&n2);

    printf("---------------MENU-------------------\n");
    printf("1: SOMA\n");
    printf("2: RA�Z\n");
    printf("======================================\n");
    printf("Escolha uma op��o: ");
    fflush(stdin);
    scanf("%d",&menu);
    printf("--------------------------------------\n");
    switch(menu){
case 1:
    soma=n1+n2;
    printf("A SOMA de %d e %d � %d.\n",n1,n2,soma);
    break;
case 2:
    raiz1=sqrt(n1);
    raiz2=sqrt(n2);
    printf("A RA�Z de %d � %.2f.\n",n1,raiz1);
    printf("A RA�Z de %d � %.2f.\n",n2,raiz2);
    break;
default:
    printf("Op��o invalida!\n");
    break;
    }
    printf("======================================\n");


}
