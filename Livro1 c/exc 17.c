#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int horas,vlrHor;
    float salmin,vlrSal,saLq,salBr,imp,sem;
    printf("----------EXC 17 ------------\n");
    printf("Quantas horas de trabalho: ");
    fflush(stdin);
    scanf("%d",&horas);

    printf("Qual o seu salario: ");
    fflush(stdin);
    scanf("%f",&salmin);

    vlrHor=salmin/2;

    salBr=vlrHor*horas;

    imp=(salBr*3/100);

    saLq=salBr-imp;
    sem=(saLq*4)*2;

    printf("O total de imposto pago foi %.2f dólares.\n",imp);
    printf("O seu salário será de %.2f dólares por dia.\n",saLq);
    printf("Se for por dólares %.2f por mês em duas pessoas.\n",sem);



}
