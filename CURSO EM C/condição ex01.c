#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <time.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    float n1,n2,m;
    printf("----------Média com If-------------\n");
    printf("Qual a nota da primeira prova: ");
    fflush(stdin);
    scanf("%f",&n1);
    printf("Qual a nota da segunda prova: ");
    fflush(stdin);
    scanf("%f",&n2);
    m=(n1+n2)/2;
    if(m>=7){
        printf("O aluno está APROVADO!");
    }else if(m<6.99&&m>4.99){
        printf("O aluno está em EXAME!");
    }else{
        printf("0 aluno está REPROVADO!");
    }
}
