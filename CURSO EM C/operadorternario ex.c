#include <stdio.h>
#include <locale.h>
void main (){
    setlocale(LC_ALL,"Portuguese");
    int a = 3, b =7;
    int c = (a<b)?b*2:a+5;
    float d = 5.5;
    char sit[10];
    printf("O resultado � %d\n",c);
    printf("=================================\n");
    printf("A situa��o do aluno �: %s\n",(d>=7)?"APROVADO":"REPROVADO");
    printf("=================================\n");
}
