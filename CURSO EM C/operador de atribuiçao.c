#include <stdio.h>
#include <locale.h>
#include <string.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int a=6,b=6,c=3,d=5,e=10;
    printf("------------------------------\n");
    printf("----OPERADOR DE ATRIBUIÇÃO----\n");
    printf("------------------------------\n");
    printf("\n");
    printf("----------SOMA----------------\n");
    printf("\n");
    printf("Forma normal: \tA=A+2\n");
    printf("Forma nova: \tA+=5\n");
    printf("\n");
    a=a+2;
    printf("O novo valor de \"A\" é \t%d\n",a);
    a+=5;
    printf("O novo valor de \"A\" é \t%d\n",a);
    printf("\n");
    printf("----------DIVISÃO-------------\n");
    printf("\n");
    printf("Forma normal: \tB=B/1\n");
    printf("Forma nova: \tD/=2\n");
    printf("\n");
    b=b/1;
    printf("O novo valor de \"B\" é \t%d\n",b);
    b/=2;
    printf("O novo valor de \"B\" é \t%d\n",b);
    printf("\n");
    printf("--------MULTIPLICAÇÃO---------\n");
    printf("\n");
    printf("Forma normal: \tC=C*3\n");
    printf("Forma nova: \tC*=5\n");
    printf("\n");
    c=c*3;
    printf("O novo valor de \"C\" é \t%d\n",c);
    c*=5;
    printf("O novo valor de \"C\" é \t%d\n",c);
    printf("\n");
    printf("----------SUBTRAÇÃO-----------\n");
    printf("\n");
    printf("Forma normal: \tD=D-2\n");
    printf("Forma nova: \tD-=2\n");
    printf("\n");
    d=d-2;
    printf("O novo valor de \"D\" é \t%d\n",d);
    d-=1;
    printf("O novo valor de \"D\" é \t%d\n",d);
    printf("\n");
    printf("------------MÓDULO-----------\n");
    printf("\n");
    printf("Forma normal: \tE=E%%6\n");
    printf("Forma nova: \tE%%\=3\n");
    printf("\n");
    e=e%6;
    printf("O novo valor de \"D\" é \t%d\n",e);
    e%=3;
    printf("O novo valor de \"D\" é \t%d\n",e);
    printf("\n");


}
