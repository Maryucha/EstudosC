#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int num;
    printf("---------CONDI��ES COMPOSTAS-----------\n");
    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d",&num);
    if(num%2==0){
        printf("O n�mero %d � PAR.\n",num);
    }else{
        printf("O n�mero %d � IMPAR.\n",num);
    }



}
