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

    printf("O total de imposto pago foi %.2f d�lares.\n",imp);
    printf("O seu sal�rio ser� de %.2f d�lares por dia.\n",saLq);
    printf("Se for por d�lares %.2f por m�s em duas pessoas.\n",sem);



}
