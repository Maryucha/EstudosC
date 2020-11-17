#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    char nome[10];
    float n1,n2,n3,me;
    printf("---------EXC 02---------\n");
    printf("Qual o nome do aluno: ");
    fflush(stdin);
    scanf("%s",nome);
    printf("Qual a nota da primeira prova: ");
    fflush(stdin);
    scanf("%f",&n1);
    printf("Qual a nota da segunda prova: ");
    fflush(stdin);
    scanf("%f",&n2);
    printf("Qual a nota da terceira prova: ");
    fflush(stdin);
    scanf("%f",&n3);
    me=(n1+n2+n3)/3;
    printf("A média do aluno %s foi %.1f.",nome,me);



}
