#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    float salIn,salN,perct;
    int ano=2007,anoAt;
    printf("------------ REAJUSTE SALÁRIO COM FOR -----------------\n");
    printf("Em que ano estamos: ");
    fflush(stdin);
    scanf("%d",&anoAt);
        salIn=1000;
        perct=1.5/100;
        salN=salIn+perct*salIn;
    for(ano=2007;anoAt>=2007;){
         perct=2*perct;
         salN=salN+perct*salN;
    }
    printf("Seu salário atualizado é R$%.2f reais.",salN);

}
