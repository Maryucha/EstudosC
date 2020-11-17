#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int cont,idade,soma;
    float media;
    char nome[20];
    printf("------------- FOR II -------------\n");
    for(cont=1;cont<=5;cont++){
        printf("Digite o nome do aluno: ");
        fflush(stdin);
        scanf("%s",nome);

        printf("Digite a idade do aluno: ");
        fflush(stdin);
        scanf("%d",&idade);

        soma+=idade;
    }
    media=soma/cont;
    printf("A média de idade dos seus alunos é: %.1f anos",media);
}
