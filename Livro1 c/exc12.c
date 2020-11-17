#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int dis;
    float cent,mili,km;
    printf("------------- EXC12 ----------------\n");
    printf("Digite o valor em mestros: ");
    fflush(stdin);
    scanf("%d",&dis);
    cent=dis*100;
    printf("%d metros são %.2f centimetros.\n",dis,cent);
    mili=dis*1000;
    printf("%d metros são %.2f milimetros.\n",dis,mili);
    km=dis/1000;
    printf("%d metros é %.2f quilometros.\n",dis,km);
}
