#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int precoFa,precoFi,vlrL,vlrI;
    int taxaL,taxaIm;

    printf("-----------EXC 14 ---------------\n");
    printf("Digite o valor do preco de fabrica do carro: ");
    fflush(stdin);
    scanf("%d",&precoFa);

    printf("Digite o percentual de lucro da montadora: ");
    fflush(stdin);
    scanf("%d",&taxaL);

    printf("Digite o percentual de imposto: ");
    fflush(stdin);
    scanf("%d",&taxaIm);

    vlrL=(precoFa*taxaL)/100;
    vlrI=(precoFa*taxaIm)/100;
    precoFi=precoFa+vlrL+vlrI;
    printf("O pre�o de fabrica era R$%d reais.\n",precoFa);
    printf("O valor que a montadora recebe de lucro � R$%d reais.\n",vlrL);
    printf("O valor de impostos pagos � R$%dreais.\n",vlrI);
    printf("O valor total do carro �: R$%d reais.\n",precoFi);



}
