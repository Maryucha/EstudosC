#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    printf("-------------M�DIA------------------\n");
    float n1,n2,m;
    printf("Digite a nota da primeira prova: ");
    fflush(stdin);
    scanf("%f",&n1);
    printf("Digite a nota da segunda prova: ");
    fflush(stdin);
    scanf("%f",&n2);
    m=(n1+n2)/2;
    printf("A m�dia do aluno foi %.1f.\n",m);
    if(m>=7){
        printf("O aluno est� APROVADO!\n");
    }else if(m>=4&&m<=6){
        printf("O aluno est� em EXAME!\n");
    }else{
        printf("O aluno est� REPROVADO!\n");
    }

}
