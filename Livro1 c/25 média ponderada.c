#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    float trab,ava,rec,m,tot1,tot2,tot3;
    int ps1,ps2,ps3, soma;
    printf("------- m�dia ponderada ---------------------\n");
    printf("\n");

    printf("Digite a nota do trabalho: ");
    fflush(stdin);
    scanf("%f",&trab);

    printf("Qual o peso da nota do Trabalho: ");
    fflush(stdin);
    scanf("%d",&ps1);
    printf("--------------------------------------------\n");

    printf("Digite a nota da Avalia��o: ");
    fflush(stdin);
    scanf("%f",&ava);

    printf("Qual o peso da nota da Avalia��o: ");
    fflush(stdin);
    scanf("%d",&ps2);
    printf("--------------------------------------------\n");

    printf("Digite a nota da recupera��o: ");
    fflush(stdin);
    scanf("%f",&rec);

    printf("Qual o peso da nota da recupera��o: ");
    fflush(stdin);
    scanf("%d",&ps3);
    printf("\n");
    printf("============= RESULTADO FINAL =============\n");
    printf("\n");

    tot1=trab*ps1;
    tot2=ava*ps2;
    tot3=rec*ps3;
    soma=ps1+ps2+ps3;
    m=(tot1+tot2+tot3)/soma;

    printf("A m�dia do aluno foi: %.2f.\n",m);
    printf("\n");

    printf("============== BOLETIM ===================\n");
    printf("\n");
    if(m>7){
        printf("O Aluno est� APROVADO!.\n");
    }else if(m>=4.99&&m<=6.99){
        printf("O Aluno est� em EXAME!.\n");
    }else{
        printf("O Aluno est� REPROVADO!.\n");
    }
    printf("\n");
    printf("-------------------------------------------\n");


}
