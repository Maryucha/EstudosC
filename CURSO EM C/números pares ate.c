#include <stdio.h>
#include <locale.h>
void main(){
 setlocale(LC_ALL,"portuguese");
 printf("-----------PARES AT� ?-----------\n");
 int num=1,teste,cont=0;
 printf("At� que n�mero deseja testar: ");
 fflush(stdin);
 scanf("%d",&teste);
    while(num<=teste){
        if(num%2==0)
            printf("\n");
            num++;
                if(num%2==0)
                cont++;
    }
    printf("Existem %d n�meros pares at� %d.\n",cont,teste);
}
