#include <stdio.h>
#include <locale.h>
void main (){
    setlocale(LC_ALL,"Portuguese");
    float n1,n2,m;

    printf("Primeira NOTA: ");
    fflush(stdin);
    scanf("%f",&n1);

    printf("Segunda NOTA: ");
    fflush(stdin);
    scanf("%f",&n2);

    m=(n1+n2)/2;

    printf("Com as notas %.1f e %.1f, o aluno obteve a média %.1f.\n", n1,n2,m);
    printf("A sua situação é %s.\n", (m>=7)?"APROVADO":"REPROVADO");
}
