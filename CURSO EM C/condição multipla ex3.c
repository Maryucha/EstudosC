#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    float pNor,pRe,car,fer,cri,fri,nat;
    int n;
    printf("=======================================\n");
    printf("--------- PRE�O DE �POCA --------------\n");
    printf("=======================================\n");
    printf("Digite o valor do produto: ");
    fflush(stdin);
    scanf("%f",&pNor);
    printf("--------------------------------------------------------------------------\n");
    printf("1: CARNAVAL\n");
    printf("2: F�RIAS ESCOLARES\n");
    printf("3: DIA DAS CRIAN�AS\n");
    printf("4: BLACK FRIDAY\n");
    printf("5: NATAL\n");
    printf("--------------------------------------------------------------------------\n");
    printf("Escolha a �poca do ano:");
    fflush(stdin);
    scanf("%d",&n);
    printf("--------------------------------------------------------------------------\n");
    switch(n){
case 1:
    car=pNor+(pNor*10/100);
    printf("O valor do seu produto no CARNAVAL ser� de: R$%.2f reais.\n",car);
    break;
case 2:
    fer=pNor+(pNor*20/100);
    printf("O valor do seu produto nas F�RIAS ser� de: R$%.2f reais.\n",fer);
    break;
case 3:
    cri=pNor+(pNor*5/100);
    printf("O valor do seu produto no DIA DAS CRIAN�AS ser� de: R$%.2f reais.\n",cri);
    break;
case 4:
    fri=pNor-(pNor*30/100);
    printf("O valor do seu produto no BLACK FRIDAY ser� de: R$%.2f reais.\n",fri);
    break;
case 5:
    nat=pNor-(pNor*5/100);
    printf("O valor do seu produto no NATAL ser� de: R$%.2f reais.\n",nat);
    break;
default:
    printf("Op��o invalida!\n");
    }
    printf("--------------------------------------------------------------------------\n");


}
