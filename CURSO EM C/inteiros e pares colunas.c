#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    printf("--------------- COLUNAS ----------------------\n");
    int num,teste,contP=0,contI=0;
    printf("Digite at� onde quer ver: ");
    fflush(stdin);
    scanf("%d",&teste);
    printf("Digite onde deseja come�ar: ");
    fflush(stdin);
    scanf("%d",&num);
    printf(" PARES \t\t�MPARES\n");
    printf("-------------------------\n");
    while(num<=teste){
        if(num%2==0)
            printf(" %d\t\n",num);
        else
            printf("\t\t%d\n",num);
        num++;
        if(num%2==0)
            contP++;
        else
            contI++;
    }
    printf("-------------------------\n");
    printf("Temos %d PARES e %d �MPARES.\n",contP,contI);




}
