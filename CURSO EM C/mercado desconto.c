#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    float total,compra,desc=10;
    printf("-------- MERCADO ----------\n");
    printf("De quanto foi a sua compra? ");
    fflush(stdin);
    scanf("%f",&compra);
    if(compra>=500){
            total=compra-(compra*desc/100);
        printf("Voc� obteve um desconto de 10%%.\n");
        printf("O valor total ser� de R$%.2f reais.\n",total);
    }else{
        printf("Obrigada e Volte sempre!");
    }
}
