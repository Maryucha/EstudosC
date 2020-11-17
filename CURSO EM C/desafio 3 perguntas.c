#include <stdio.h>
#include <locale.h>
char nome[40];
float peso;
int idade;
void main(){
setlocale(LC_ALL, "Portuguese");
printf("Qual seu nome: \n");
scanf("%s", nome);
printf("%s qual a sua idade?\n",nome);
scanf("%i",&idade);
printf("%s você tem %i anos de idade, e qual seu peso?\n",nome,idade);
scanf("%f",&peso);
printf("A %s tem %i anos de idade e seu peso é %6.2f",nome,idade,peso);

}
