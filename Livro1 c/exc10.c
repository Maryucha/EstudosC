#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int num;
    float resp1,resp2;
    double resp3,resp4;
    printf("------------EXC 10--------------\n");
    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d",&num);
    resp1=pow(num,2);
    resp2=pow(num,3);
    resp3=sqrt(num);
    resp4=cbrt(num);
    printf("O número %d ao quadrado é %.0f.\n",num,resp1);
    printf("O número %d ao cubo é %.0f.\n",num,resp2);
    printf("A raiz quadrada de  %d é %.1f.\n",num,resp3);
    printf("A raiz cubica de %d é %.1f.\n",num,resp4);

}
