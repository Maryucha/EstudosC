#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int cad,idade,soma;
    float mediaidade,mediavlr,vlrcompra,somavlr;
    char nome[20];
    printf("----------- CADASTRO -----------------\n");
    for(cad=0;cad<=3;cad++){
        printf("Digite o nome do cliente: ");
        fflush(stdin);
        scanf("%s",nome);
        printf("\n");
        printf("Digite a idade do seu cliente: ");
        fflush(stdin);
        scanf("%d",&idade);
        printf("\n");
        printf("Qual o valor da compra: ");
        fflush(stdin);
        scanf("%f",&vlrcompra);
        printf("-----------------------------------\n");
        soma+=idade;
        somavlr+=vlrcompra;
    }
    mediaidade=soma/cad;
    mediavlr=somavlr/cad;
    printf("A média de idade dos seus clientes hoje foi: %.1f\n",mediaidade);
    printf("A média de compra na sua loja foi R$%.2f reais.\n",mediavlr);

}
