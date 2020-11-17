#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int degrau,altura,tot;
    printf("Qual a altura de cada degrau: ");
    fflush(stdin);
    scanf("%d",&degrau);

    printf("Qual altura você deseja alcançar: ");
    fflush(stdin);
    scanf("%d",&altura);

    tot=altura/degrau;
    printf("A quantidade de degraus que a sua escada deve ter é: %d.",degrau);


}
