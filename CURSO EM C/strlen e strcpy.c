#include <stdio.h>
#include <locale.h>
#include <string.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[10];
    printf("Qual o nome do aluno: ");
    fflush(stdin);
    scanf("%s",&nome);
    printf("==============STRCPY===============\n");
    char sit[10];
    int n1=7;
    int n2=8;
    float m;
    m=(n1+n2)/2;
    strcpy(sit,(m>=7)?"APROVADO":"REPROVADO");
    printf("A situação do aluno %s é %s\n", nome,sit);
    printf("================STRLEN=============\n");
    char teste[]="Gustavo";
    int tam=strlen(teste);
    printf("A palavra %s tem %d letras\n",teste,tam);
    printf("================STRCMP=============\n");
    char no1[]="GABRIELA";
    char no2[]="MARYUCHA";
    int res=strcmp(no1,no2);
    printf("O resultado da comparação entre %s e %s é %d\n",no1,no2,res);
    printf("================STRCAT=============\n");
    char s1[]="Gustavo";
    char s2[]="Maryucha";
    printf("%s\n",strcat(s1,s2));
    printf("================STRUP=============\n");
    printf("%s\n",strupr(teste));
    printf("================STRLWR=============\n");
    printf("%s\n",strlwr(teste));



}
