#include <stdio.h>
#include <locale.h>
void main(){
setlocale(LC_ALL,"Portuguese");
int n;
int dobro;
float ter;
printf("Digite um n�mero: \n");
scanf("%i",&n);
dobro=(n*2);
printf("O DOBRO de %i � %d\n",n,dobro);
ter=((float)n/3);
printf("A ter�a parte de de %i � %.2f",n,ter);
}
