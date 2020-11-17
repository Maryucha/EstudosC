#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int qntalunos,nota,contador=1;
    float soma;
    printf("------------ MÉDIA DA TURMA ------------\n");
    printf("Digite quantos alunos a turma tem: ");
    fflush(stdin);
    scanf("%d",&qntalunos);
    while(contador<=qntalunos){
        printf("Nota do aluno %d: ",contador);
        fflush(stdin);
        scanf("%d",&nota);
        soma=soma+nota;
        contador++;

    }
    printf("Media da turma: %.2f",soma/qntalunos);

}
