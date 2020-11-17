#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int repetir,i,menor10=0,entre10e20=0,maior20=0;
    char nome[20];
    float precocompra,precovenda,calculo,totalvenda,totalcompra,lucro,aux;
    printf("------- lucro lojinha --------------------\n");
    i=0;
    printf("Digite quantas vendas: ");
    fflush(stdin);
    scanf("%d",&repetir);
    printf("----------------------------\n");
    while(i<repetir){
        i++;
        printf("Digite o nome do cliente: ");
        fflush(stdin);
        scanf("%s",nome);
        printf("Digite o preço da compra: ");
        fflush(stdin);
        scanf("%f",&precocompra);
        printf("Digite o preco da venda: ");
        fflush(stdin);
        scanf("%f",&precovenda);
        printf("----------------------------\n");
        totalcompra+=precocompra;
        totalvenda+=precovenda;

        lucro=totalvenda-totalcompra;
        aux=precovenda-precocompra;

        calculo=(100*aux)/precocompra;

        if(calculo<10){
            menor10++;
        }else if(calculo>=10 && calculo<=20){
            entre10e20++;
        }else if (calculo>20){
            maior20++;
        }

    }
    printf("%d vendas com o lucro <10%%.\n",menor10);
    printf("%d vendas com lucro >=10%% e <=20%%.\n",entre10e20);
    printf("%d vendas com lucro >20%%.\n",maior20);
    printf("----------------------------\n");
    printf("Total de compra R$ %.2f reais.\n",totalcompra);
    printf("Total de vendas R$%.2f reais.\n",totalvenda);
    printf("Lucro real de R$ %.2f reais.\n",lucro);
    printf("----------------------------\n");

}
