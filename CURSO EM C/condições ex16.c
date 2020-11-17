#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    float vTot,vCo,vD;
    printf("-------- MERCADO ----------\n");
    printf("De quanto foi a sua compra? ");
    fflush(stdin);
    scanf("%f",vCo);
   if(vCo>500){
        vTot=(vCo-(vCo*vD/100));
    printf("O valor do seu desconto será de: R$%.2f reais\n",vTot);
   }else{
    printf("Muito obrigada pela sua compra!");
   }

}
