#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    float sal,salNv,grat,desc,taxadesc,taxagrat,total;
    printf("---------EXC06-----------\n");
    printf("Digite seu salário: R$");
    fflush(stdin);
    scanf("%f",&sal);
    printf("Digite a taxa de gratificação: ");
    fflush(stdin);
    scanf("%f",&taxagrat);
    printf("Digite a taxa de imposto: ");
    fflush(stdin);
    scanf("%f",&taxadesc);

    grat=sal*taxagrat/100;
    salNv=sal+grat;

    desc=salNv*taxadesc/100;
    total=salNv-desc;
    printf("--------------------------------------------------\n");
    printf("\n");

    printf("Seu salário tem uma gratificação de R$%.2f\n",grat);
    printf("--------------------------------------------------\n");
    printf("\n");
    printf("E o seu salário é de R$%.2f reais.\n",salNv);
    printf("--------------------------------------------------\n");
    printf("\n");
    printf("O total de imposto que você deve pagar é: R$%.2f reais.\n",desc);
    printf("--------------------------------------------------\n");
    printf("\n");
    printf("Portanto seu salário reaal é R$%.2f reais.\n",total);
    printf("--------------------------------------------------\n");

}
