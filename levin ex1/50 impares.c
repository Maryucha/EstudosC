#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    printf("----------- 50 números pares-------------\n");
    int num,par=0;
    printf("Digite até que número deseja testar: ");
    fflush(stdin);
    scanf("%d",&num);
    for(num=0;num>=50;num++){
        if(num%2==0){
                printf("%d\n",num);
            par++;
        }
    }
printf("Até o número %d temos %d PARES.\n",num,par);
}
