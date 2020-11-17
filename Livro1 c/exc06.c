#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    float sal,desc,salNv;
    int tax,grat;
    printf("-----------EXC 06 -----------\n");
    printf("Digite seu salario: R$");
    fflush(stdin);
    scanf("%f",&sal);
    printf("Qual o valor da sua gratificação: ");
    fflush(stdin);
    scanf("%d",&grat);
    printf("Digite a taxa de imposto: ");
    fflush(stdin);
    scanf("%d",&tax);
    salNv=sal+grat;
    desc=(salNv-(salNv*tax)/100);
    printf("Seu salário será de R$%.2f reais.",desc);








}
