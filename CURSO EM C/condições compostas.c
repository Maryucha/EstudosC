#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int num;
    printf("---------CONDIÇÕES COMPOSTAS-----------\n");
    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d",&num);
    if(num%2==0){
        printf("O número %d é PAR.\n",num);
    }else{
        printf("O número %d é IMPAR.\n",num);
    }



}
