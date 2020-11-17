#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    float dep,tax,rend,tot;
    printf("-----------EXC 07-------------\n");
    printf("Quanto você deseja depositar: ");
    fflush(stdin);
    scanf("%f",&dep);
    printf("Qual a taxa de rendimento: ");
    fflush(stdin);
    scanf("%f",&tax);
    printf("---------CALCULO---------\n");
    rend=dep*tax/100;
    tot=dep+rend;
    printf("Seu deposito gerou um juros de R$%.2f reais.\n",rend);
    printf("O total do resgate será de R$%.2f reais.\n",tot);

}
