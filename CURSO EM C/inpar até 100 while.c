#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    printf("----------- N�MERO IMPAR --------------\n");
    int num,teste;
    printf("Digite quantas vezes deseja testar: ");
    fflush(stdin);
    scanf("%d",&teste);
    printf("Onde deseja come�ar: ");
    fflush(stdin);
    scanf("%d",&num);

    while(num>=teste){
       if(num%4==0)
        printf("%d \n",num);
        num++;
       }
    }

