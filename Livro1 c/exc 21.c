#include <stdio.h>
#include <locale.h>
void main(){
setlocale(LC_ALL,"portuguese");
int kw;
float saM,vlrKw,vlrRe,desc;
printf("-------------- EXC 21 ----------------------------\n");
printf("Vamos calcular a conta de energia: \n");
printf("--------------------------------------------------\n");
printf("\n");
printf("Digite a quantidade de QuiloWatts que voc� consome: ");
fflush(stdin);
scanf("%d",&kw);
printf("---------------------------------------------------\n");
printf("\n");
printf("Digite O valor do sal�rio minimo: ");
fflush(stdin);
scanf("%f",&saM);
printf("---------------------------------------------------\n");
printf("\n");
vlrKw=500/saM;
vlrRe=vlrKw*kw;
desc=vlrRe-(vlrRe*15/100);

printf("O valor dos Kw/h � R$%.2f centavos. \n",vlrKw);
printf("\n");
printf("---------------------------------------------------\n");
printf("\n");
printf("O valor da sua fatura ser� de R$%.2f reais.\n",vlrRe);
printf("\n");
printf("---------------------------------------------------\n");
printf("\n");
printf("O valor com desconto � de R$%.2f reais.\n",desc);
printf("\n");
printf("---------------------------------------------------\n");


}
