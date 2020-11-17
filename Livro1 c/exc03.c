#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    float n1,n2,n3,me,sm1,sm2,sm3;
    int ps1,ps2,ps3,spe;
    char nome[20];

    printf("-----------EXC 3--------------\n");
    printf("Digite o nome do aluno: ");
    fflush(stdin);
    scanf("%s",nome);
    printf("---------------------------------\n");
    printf("Digite o valor da prova 1: ");
    fflush(stdin);
    scanf("%f",&n1);
    printf("Digite o peso da prova 1: ");
    fflush(stdin);
    scanf("%d",&ps1);
    printf("---------------------------------\n");
    printf("Digite o valor da prova 2: ");
    fflush(stdin);
    scanf("%f",&n2);
    printf("Digite o peso da prova 2: ");
    fflush(stdin);
    scanf("%d",&ps2);
    printf("---------------------------------\n");
    printf("Digite o valor da prova 3: ");
    fflush(stdin);
    scanf("%f",&n3);
    printf("Digite o peso da prova 3: ");
    fflush(stdin);
    scanf("%d",&ps3);
    printf("---------------------------------\n");
    sm1=n1*ps1;
    sm2=n2*ps2;
    sm3=n3*ps3;
    spe=ps1+ps2+ps3;
    me=(sm1+sm2+sm3)/spe;

    printf("A média do aluno %s, foi %.1f.",nome,me);



}
