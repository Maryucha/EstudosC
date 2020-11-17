#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int a=5;
    int b=2;
    float r=a/b;
    float z=(float)a/b;
    printf("a divisão de A / B é %.2f\n",r);
    printf("a divisão de A / B é %.2f",z);

}
