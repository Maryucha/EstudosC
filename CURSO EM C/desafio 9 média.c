#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[20];
    float n1,n2,m;
    printf("Nome do aluno: ");
    fflush(stdin);
    gets(nome);
    printf("Nota 1: ");
    fflush(stdin);
    scanf("%f",&n1);
    printf("Nota 2: ");
    fflush(stdin);
    scanf("%f",&n2);
    m=(n1+n2)/2;
    printf("%c seu m�dia foi %1.1f\n",nome,m);
    if (m<=5){
        printf("REPROVADO");
    }else{
        if(m>=7){
            printf("APROVADO");
        }else{
            printf("EXAME");
        }
    }
}
