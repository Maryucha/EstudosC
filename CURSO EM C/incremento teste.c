#include <stdio.h>
#include <locale.h>
#include <string.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
int z,x=0,y=4;
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("\tExerc�cios\n");
    printf("\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("\tNORMAL\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("o valor NORMAL de x � \"%d\"\n",x);
    printf("o valor NORMAL de y � \"%d\"\n",y);
    z=x+y;
    printf("O valor de z=\"%d\"+\"%d\" \"%d\"\n",x,y,z);
    printf("\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("    PR� INCREMENTO\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("o valor PR� INCREMENTO de x � \"%d\"\n",++x);
    printf("o valor PR� INCREMENTO de y � \"%d\"\n",++y);
    z=x+y;
    printf("O valor de z=\"%d\"+\"%d\" \"%d\"\n",x,y,z);
    printf("\n");
    printf("\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("\tNORMAL\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("o valor NORMAL de x � \"%d\"\n",--x);
    printf("o valor NORMAL de y � \"%d\"\n",--y);
    z=x+y;
    printf("O valor de z=\"%d\"+\"%d\" \"%d\"\n",x,y,z);
    printf("\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("\tPR� DECREMENTO\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("o valor PR� DECREMENTO de x � \"%d\"\n",--x);
    printf("o valor PR� DECREMENTO de y � \"%d\"\n",--y);
    z=x+y;
    printf("O valor de z=\"%d\"+\"%d\" \"%d\"\n",x,y,z);
    printf("\n");
    printf("\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("\tNORMAL\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("o valor NORMAL de x � \"%d\"\n",++x);
    printf("o valor NORMAL de y � \"%d\"\n",++y);
    z=x+y;
    printf("O valor de z=\"%d\"+\"%d\" \"%d\"\n",x,y,z);
    printf("\n");
    printf("\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("    P�S INCREMENTO\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("o valor PR� INCREMENTO de x � \"%d\"\n",x++);
    printf("o valor PR� INCREMENTO de y � \"%d\"\n",y++);
    z=x+y;
    printf("O valor de z=\"%d\"+\"%d\" \"%d\"\n",x,y,z);
    printf("\n");
    printf("\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("\tNORMAL\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("o valor NORMAL de x � \"%d\"\n",--x);
    printf("o valor NORMAL de y � \"%d\"\n",--y);
    z=x+y;
    printf("O valor de z=\"%d\"+\"%d\" \"%d\"\n",x,y,z);
    printf("\n");
    printf("\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("    P�S DECREMENTO\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("o valor PR� INCREMENTO de x � \"%d\"\n",x--);
    printf("o valor PR� INCREMENTO de y � \"%d\"\n",y--);
    z=x+y;
    printf("O valor de z=\"%d\"+\"%d\" \"%d\"\n",x,y,z);

}
