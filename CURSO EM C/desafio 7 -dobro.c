#include <stdio.h>
#include <locale.h>
void main(){
setlocale(LC_ALL,"Portuguese");
int n;
int dobro;
float ter;
printf("Digite um número: \n");
scanf("%i",&n);
dobro=(n*2);
printf("O DOBRO de %i é %d\n",n,dobro);
ter=((float)n/3);
printf("A terça parte de de %i é %.2f",n,ter);
}
