#include <stdio.h>
#include <locale.h>
#include <string.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
int z,x=0,y=4;
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("\tExercícios\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("\n");
    printf("\tPRÉ INCREMENTO\n");
    printf("O valor de x é com o pré incremento é: \"%d\"\n",++x);
    printf("O valor de y é com o pré incremento é: \"%d\"\n",++y);
    printf("\n");
    printf("O valor de X é \"%d\" e de Y é \"%d\"\n",x,y);
    z=++x + ++y;
    printf("O valor de Z=X+Y é \"%d\"\n",z);
    printf("\n");
    printf("\tPRÉ DECREMENTO\n");
    printf("O valor de x é com o pré decremento é: \"%d\"\n",--x);
    printf("O valor de y é com o pré decremento é: \"%d\"\n",--y);
    printf("\n");
    z=--x + --y;
    printf("O valor de X é \"%d\" e de Y é \"%d\"\n",x,y);
    printf("O valor de Z=X+Y é \"%d\"\n",z);
    printf("\n");
    printf("\tPÓS INCREMENTO\n");
    z=x++ + y++;
    printf("O valor de X é \"%d\" e de Y é \"%d\"\n",x,y);
    printf("O valor de Z=X+Y é \"%d\"\n",z);
    printf("\n");
    printf("\tPÓS DECREMENTO\n");
    z=x-- + y--;
    printf("O valor de X é \"%d\" e de Y é \"%d\"\n",x,y);
    printf("O valor de Z=X+Y é \"%d\"\n",z);


}
