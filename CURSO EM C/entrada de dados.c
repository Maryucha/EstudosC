#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    float med;
    char nome;
    printf("Nota da prova \n");
    scanf("%f",&num);
    printf("Qual  foi a sua média \n");
    scanf("%d",&med);
    printf("Qual o seu nome: \n");
    scanf("%s",&nome);
}
