#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    printf("------------ N�MEROS �MPARES --------------\n");
    int cont=0,num;
    printf("Digite at� onde deseja testar: ");
    fflush(stdin);
    scanf("%d",&num);
    while(cont<=num){
        if(cont%2!=0)
            printf("%d\n",cont);
            cont++;
        }
    }


