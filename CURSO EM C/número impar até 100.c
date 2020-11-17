#include <stdio.h>
#include <locale.h>
void main(){
 setlocale(LC_ALL,"portuguese");
 printf("-----------ÍMPARES ATÉ ?-----------\n");
 int num=1,teste,cont=0;
 printf("Até que número deseja testar: ");
 fflush(stdin);
 scanf("%d",&teste);
    while(num<=teste){
        if(num%2==1)
            printf("%d \n",num);
            num++;
            if(num%2==1)
                cont++;
    }
    printf("Existem %d números impares até %d.\n",cont,teste);
}
