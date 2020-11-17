#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    printf("------------ NÚMEROS ÍMPARES --------------\n");
    int cont=0,num;
    printf("Digite até onde deseja testar: ");
    fflush(stdin);
    scanf("%d",&num);
    while(cont<=num){
        if(cont%2!=0)
            printf("%d\n",cont);
            cont++;
        }
    }


