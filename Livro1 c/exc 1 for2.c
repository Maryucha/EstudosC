#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    float sal,salN,perct;
    int ano,anoAt;
    printf("------------ REAJUSTE SAL�RIO COM FOR -----------------\n");

    printf("Em que ano estamos: ");
    fflush(stdin);
    scanf("%d",&anoAt);

        sal=1000;
        perct=1.5/100;
        salN=sal+perct*sal;

    for(ano=2007;anoAt>2007;ano++){
         perct=2*perct;
         salN=salN+perct*salN;
    }
    printf("Seu sal�rio atualizado � R$%.2f reais.",salN);

}
