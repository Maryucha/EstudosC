#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int num;
    float resp1,resp2;
    double resp3,resp4;
    printf("------------EXC 10--------------\n");
    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d",&num);
    resp1=pow(num,2);
    resp2=pow(num,3);
    resp3=sqrt(num);
    resp4=cbrt(num);
    printf("O n�mero %d ao quadrado � %.0f.\n",num,resp1);
    printf("O n�mero %d ao cubo � %.0f.\n",num,resp2);
    printf("A raiz quadrada de  %d � %.1f.\n",num,resp3);
    printf("A raiz cubica de %d � %.1f.\n",num,resp4);

}
