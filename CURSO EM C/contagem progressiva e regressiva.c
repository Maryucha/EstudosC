#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"portuguese");
    int n2,s;
    float n1,m;
printf("digite um n�mero: ");
fflush(stdin);
scanf("%f",&n1);
printf("Digite outro n�mero: ");
fflush(stdin);
scanf("%d",&n2);
s=n1+n2;
m=(n1+n2)/2;
printf("a soma � :%d.\n",s);
printf("a m�dia �: %.2f.\n",m);

}
