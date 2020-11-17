#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    float pNor,pRe,car,fer,cri,fri,nat;
    int n;
    printf("=======================================\n");
    printf("--------- PREÇO DE ÉPOCA --------------\n");
    printf("=======================================\n");
    printf("Digite o valor do produto: ");
    fflush(stdin);
    scanf("%f",&pNor);
    printf("--------------------------------------------------------------------------\n");
    printf("1: CARNAVAL\n");
    printf("2: FÉRIAS ESCOLARES\n");
    printf("3: DIA DAS CRIANÇAS\n");
    printf("4: BLACK FRIDAY\n");
    printf("5: NATAL\n");
    printf("--------------------------------------------------------------------------\n");
    printf("Escolha a época do ano:");
    fflush(stdin);
    scanf("%d",&n);
    printf("--------------------------------------------------------------------------\n");
    switch(n){
case 1:
    car=pNor+(pNor*10/100);
    printf("O valor do seu produto no CARNAVAL será de: R$%.2f reais.\n",car);
    break;
case 2:
    fer=pNor+(pNor*20/100);
    printf("O valor do seu produto nas FÉRIAS será de: R$%.2f reais.\n",fer);
    break;
case 3:
    cri=pNor+(pNor*5/100);
    printf("O valor do seu produto no DIA DAS CRIANÇAS será de: R$%.2f reais.\n",cri);
    break;
case 4:
    fri=pNor-(pNor*30/100);
    printf("O valor do seu produto no BLACK FRIDAY será de: R$%.2f reais.\n",fri);
    break;
case 5:
    nat=pNor-(pNor*5/100);
    printf("O valor do seu produto no NATAL será de: R$%.2f reais.\n",nat);
    break;
default:
    printf("Opção invalida!\n");
    }
    printf("--------------------------------------------------------------------------\n");


}
