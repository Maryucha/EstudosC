#include <stdio.h>
#include <locale.h>
#include <string.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
int z,x=0,y=4;
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("\tExerc�cios\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("\n");
    printf("\tPR� INCREMENTO\n");
    printf("O valor de x � com o pr� incremento �: \"%d\"\n",++x);
    printf("O valor de y � com o pr� incremento �: \"%d\"\n",++y);
    printf("\n");
    printf("O valor de X � \"%d\" e de Y � \"%d\"\n",x,y);
    z=++x + ++y;
    printf("O valor de Z=X+Y � \"%d\"\n",z);
    printf("\n");
    printf("\tPR� DECREMENTO\n");
    printf("O valor de x � com o pr� decremento �: \"%d\"\n",--x);
    printf("O valor de y � com o pr� decremento �: \"%d\"\n",--y);
    printf("\n");
    z=--x + --y;
    printf("O valor de X � \"%d\" e de Y � \"%d\"\n",x,y);
    printf("O valor de Z=X+Y � \"%d\"\n",z);
    printf("\n");
    printf("\tP�S INCREMENTO\n");
    z=x++ + y++;
    printf("O valor de X � \"%d\" e de Y � \"%d\"\n",x,y);
    printf("O valor de Z=X+Y � \"%d\"\n",z);
    printf("\n");
    printf("\tP�S DECREMENTO\n");
    z=x-- + y--;
    printf("O valor de X � \"%d\" e de Y � \"%d\"\n",x,y);
    printf("O valor de Z=X+Y � \"%d\"\n",z);


}
