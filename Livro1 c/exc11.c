#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int n1,n2;
    double resp;
    printf("----------- EXC 11 ----------------\n");
    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d",&n1);
    printf("Digite outro n�mero: ");
    fflush(stdin);
    scanf("%d",&n2);
    resp=pow(n1,n2);
    printf("O valor foi %.0f.\n",resp);
}
