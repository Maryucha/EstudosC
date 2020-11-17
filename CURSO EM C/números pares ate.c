#include <stdio.h>
#include <locale.h>
void main(){
 setlocale(LC_ALL,"portuguese");
 printf("-----------PARES ATÉ ?-----------\n");
 int num=1,teste,cont=0;
 printf("Até que número deseja testar: ");
 fflush(stdin);
 scanf("%d",&teste);
    while(num<=teste){
        if(num%2==0)
            printf("\n");
            num++;
                if(num%2==0)
                cont++;
    }
    printf("Existem %d números pares até %d.\n",cont,teste);
}
