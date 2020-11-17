#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    printf("-------------MÉDIA------------------\n");
    float n1,n2,m;
    printf("Digite a nota da primeira prova: ");
    fflush(stdin);
    scanf("%f",&n1);
    printf("Digite a nota da segunda prova: ");
    fflush(stdin);
    scanf("%f",&n2);
    m=(n1+n2)/2;
    printf("A média do aluno foi %.1f.\n",m);
    if(m>=7){
        printf("O aluno está APROVADO!\n");
    }else if(m>=4&&m<=6){
        printf("O aluno está em EXAME!\n");
    }else{
        printf("O aluno está REPROVADO!\n");
    }

}
