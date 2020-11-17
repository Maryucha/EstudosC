#include <stdio.h>
#include <locale.h>
void main (){
    setlocale(LC_ALL,"portuguese");
    int num;
    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d",&num);
    if (num!=2){
        printf("Deu certo!.\n");
    }else{
        printf("Deu pau!.\n");
    }

}
