#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int saco,gt1,gt2,tot;
    printf("Qual a quantidade do saco: ");
    fflush(stdin);
    scanf("%d",&saco);

    printf("Qual a quantidade o gato 1 recebe: ");
    fflush(stdin);
    scanf("%d",&gt1);

    printf("Qual a quantidade o gato 2 recebe: ");
    fflush(stdin);
    scanf("%d",&gt2);

    gt1=gt1/1000;
    gt2=gt2/1000;
    tot=saco-(5*(gt1+gt2));
    printf("A quantidade que resta no saco depois de 5 dias é: %d gramas.\n",tot);


}
