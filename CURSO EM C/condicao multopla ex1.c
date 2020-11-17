#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int n,n1,n2,s,sub,mu;
    float di;
    printf("----------Condições multiplas --ex01----\n");
    printf("Digite um valor: ");
    fflush(stdin);
    scanf("%d",&n1);
    printf("Digite outro valor: ");
    fflush(stdin);
    scanf("%d",&n2);
    printf("---------------------------------\n");
    printf("===========CALULADORA============\n");
    printf("----------------------------------\n");
    printf("1: SOMA\n");
    printf("2: SUBTRAÇÃO\n");
    printf("3: DIVISÃO\n");
    printf("4: MULTIPLICAÇÃO\n");
    printf("----------------------------------\n");
    printf("Que operação deseja fazer: ");
    fflush(stdin);
    scanf("%d",&n);
    printf("----------------------------------\n");
    switch (n){
case 1:
    s=n1+n2;
    printf("A SOMA de %d e %d é: %d\n",n1,n2,s);
break;
case 2:
    sub=n1-n2;
    printf("A SUBTRAÇÃO de %d e %d é: %d\n",n1,n2,sub);
break;
case 3:
    di=n1/n2;
    printf("A DIVISÃO de %d por %d é: %.2f\n",n1,n2,di);
break;
case 4:
    mu=n1*n2;
    printf("A MULTIPLICAÇÃO de %d e %d é: %d\n",n1,n2,mu);
    break;
default:
    printf("ERRO");
break;

    }
    printf("----------------------------------\n");
}
