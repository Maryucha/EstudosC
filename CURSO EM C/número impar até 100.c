#include <stdio.h>
#include <locale.h>
void main(){
 setlocale(LC_ALL,"portuguese");
 printf("-----------�MPARES AT� ?-----------\n");
 int num=1,teste,cont=0;
 printf("At� que n�mero deseja testar: ");
 fflush(stdin);
 scanf("%d",&teste);
    while(num<=teste){
        if(num%2==1)
            printf("%d \n",num);
            num++;
            if(num%2==1)
                cont++;
    }
    printf("Existem %d n�meros impares at� %d.\n",cont,teste);
}
