#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    printf("----------- 50 n�meros pares-------------\n");
    int num,par=0;
    printf("Digite at� que n�mero deseja testar: ");
    fflush(stdin);
    scanf("%d",&num);
    for(num=0;num>=50;num++){
        if(num%2==0){
                printf("%d\n",num);
            par++;
        }
    }
printf("At� o n�mero %d temos %d PARES.\n",num,par);
}
