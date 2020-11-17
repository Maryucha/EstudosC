#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    float num,f;
    int i,cima,baixo;
    printf("------------ EXC 22 ------------------\n");
    printf("Digite um número decimal: ");
    fflush(stdin);
    scanf("%f",&num);
    printf("---------------------------------------\n");
    i=(int)num;
    printf("A parte inteira de %.2f é: %d.\n",num,i);
    f=num-((int)num);
    printf("A parte fracionada de %.2f é %f.\n",num,f);
    cima=ceil(num);
    printf("O arredondamento para cima é %.0f.\n",cima);
}
