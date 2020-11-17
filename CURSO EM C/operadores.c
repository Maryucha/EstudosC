#include <stdio.h>
#include <locale.h>
void main (){
    setlocale(LC_ALL,"portuguese");
    int a = 7;
    int b = 2;
    int s = a + b;
    int su = a - b;
    int m = a * b;
    float d = a / b;
    int r = a % b;
    printf("A vale = %d\n",a);
    printf("A vale = %d\n",b);
    printf("A soma de A + B = %d\n",s);
    printf("A subtração de A - B = %d\n",su);
    printf("A multiplicação de A * B = %d\n",m);
    printf("A divisão de A / B = %.2f\n",d);
    printf("O resto/módulo de A / B = %d\n",r);



}
