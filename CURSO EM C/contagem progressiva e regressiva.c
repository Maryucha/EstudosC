#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"portuguese");
    int n2,s;
    float n1,m;
printf("digite um número: ");
fflush(stdin);
scanf("%f",&n1);
printf("Digite outro número: ");
fflush(stdin);
scanf("%d",&n2);
s=n1+n2;
m=(n1+n2)/2;
printf("a soma é :%d.\n",s);
printf("a média é: %.2f.\n",m);

}
