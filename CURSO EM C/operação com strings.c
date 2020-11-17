#include <stdio.h>
#include <locale.h>
#include <string.h>//biblioteca para strings
void main(){
    setlocale(LC_ALL,"Portuguese");
    int n1;
    int n2;
    char sit[10];
    float m;
    char nome[10];
    int tam=strlen(nome);
    printf("=================================\n");
    printf("---------BOLETIM ESCOLAR---------\n");
    printf("=================================\n");
    printf("Qual o nome do aluno: ");
    fflush(stdin);
    scanf("%s",&nome);
    printf("Qual a PRIMEIRA nota: ");
    scanf("%d",&n1);
    printf("Qual a SEGUNDA nota: ");
    scanf("%d",&n2);
    m=(n1+n2)/2;
    printf("=================================\n");
    strcpy(sit,(m>=7)?"APROVADO":"REPROVADO");
    printf("A situação do aluno %s é %s\n", nome,sit);
    printf("=================================\n");
    printf("O nome %s tem %d letras",nome,tam);



}
