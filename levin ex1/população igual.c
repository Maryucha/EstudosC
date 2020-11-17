#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    printf("------------POPULAÇÃO--------------\n");
    int ano;
    float a,b,cal1,cal2;
    printf("Digite a população do país A: ");
    fflush(stdin);
    scanf("%f",&a);
    printf("Digite a população do país B: ");
    fflush(stdin);
    scanf("%f",&b);
    cal1=a;
    cal2=b;
    ano=0;
    while(cal1<=cal2){
    cal1=(0.03*cal1)+cal1;
    cal2=(0.015*cal2)+cal2;
    ano++;
}
    printf("Vai levar %d anos para as populações se igualarem.\n",ano);

}
