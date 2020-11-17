#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    float sal,salNov,reaj,ajuste;
    printf("----------EXC04--------------\n");
    printf("Digite seu salario: ");
    fflush(stdin);
    scanf("%f",&sal);
    printf("Digite a taxa de reajuste: ");
    fflush(stdin);
    scanf("%f",&ajuste);
    reaj=(sal*ajuste/100);
    salNov=(sal+reaj);
    printf("Seu salário terá um acréscimo de R$%.2f reais.\n",reaj);
    printf("Seu salário pasará a ser de: R$%.2f reais.\n",salNov);



}
