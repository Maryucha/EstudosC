#include <stdio.h>
#include <locale.h>
#include <string.h>
void main(){
    int x=0,y=4;
    setlocale(LC_ALL,"Portuguese");
    printf("*==*==*==*==*==*==*==*==*==*==*==*==*==*==*==*==\n");
    printf("---------OPERADOR--PR�--INCREMENTO----------\n");
    printf("*==*==*==*==*==*==*==*==*==*==*==*==*==*==*==*==\n");
    printf("\n");
    printf("---------OPERADOR INCREMENTO----------\n");
    printf("\n");
    printf("X = X + 1\n");
    printf("++X\n");
    printf("---------OPERADOR DECREMENTO----------\n");
    printf("\n");
    printf("X = X - 1\n");
    printf("--X\n");
    printf("\n");
    printf("***************EXEMPLOS***************\n");
    printf("\n");
    printf("---------OPERADOR INCREMENTO----------\n");
    printf("----------(\t   ++X    )----------\n");
    printf("\n");
    printf("O valor de \"X\" �: %d\n",x);
    ++x;
    printf("O novo valor de \"X\" �: %d\n",x);
    printf("\n");
    printf("---------OPERADOR DECREMENTO----------\n");
    printf("----------(\t   --Y    )----------\n");
    printf("\n");
    printf("O valor de \"Y\" �: %d\n",y);
    --y;
    printf("O novo valor de \"Y\" �: %d\n",y);
    printf("\n");
    printf("*==*==*==*==*==*==*==*==*==*==*==*==*==*==*==*==\n");
    printf("---------OPERADOR--P�S--INCREMENTO----------\n");
    printf("*==*==*==*==*==*==*==*==*==*==*==*==*==*==*==*==\n");
    printf("\n");
    printf("---------OPERADOR INCREMENTO----------\n");
    printf("\n");
    printf("X = X + 1\n");
    printf("X++\n");
    printf("---------OPERADOR DECREMENTO----------\n");
    printf("\n");
    printf("X = X - 1\n");
    printf("X--\n");
    printf("\n");
    printf("***************EXEMPLOS***************\n");
    printf("\n");
    printf("---------OPERADOR INCREMENTO----------\n");
    printf("----------(\t   X++    )----------\n");
    printf("\n");
    printf("O valor de \"X\" �: %d\n",x);
    x++;
    printf("O novo valor de \"X\" �: %d\n",x);
    printf("\n");
    printf("---------OPERADOR DECREMENTO----------\n");
    printf("----------(\t   Y--    )----------\n");
    printf("\n");
    printf("O valor de \"Y\" �: %d\n",y);
    y--;
    printf("O novo valor de \"Y\" �: %d\n",y);
    printf("\n");
    printf("***************EXEMPLOS***************\n");
    printf("\n");
    int a=5;
    int b=3 + a++;
    printf("-----------DEPOIS--------\n");
    printf("O valor de A � \"%d\" e B � \"%d\"\n",a,b);
    printf("Neste caso o resultado de B=3+a++ � \"%d\"\n",b);
    printf("-------------------------\n");
    printf("-----------ANTES--------\n");
    int c=5;
    int d=3 + (++c);
    printf("O valor de C � \"%d\" e D � \"%d\"\n",c,d);
    printf("Neste caso o resultado de D=3+(++c) � \"%d\"\n",d);
    printf("-------------------------\n");


}
