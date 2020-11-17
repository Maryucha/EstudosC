#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int n1,n2,maior,menor;
    printf("----------ANALISANDO NÚMEROS----------------\n");
    printf("\n");

    printf("Digite um número INTEIRO: ");
    fflush(stdin);
    scanf("%d",&n1);

    printf("Digite um número INTEIRO: ");
    fflush(stdin);
    scanf("%d",&n2);

    printf("---------------------------------------------\n");
    if(n1>n2){
        maior=n1;
        menor=n2;
        printf("O número %d é maior que o número %d.\n",maior,menor);
    }else if(n2>n1){
        maior=n2;
        menor=n1;
        printf("O número %d é maior que o  número %d.\n",maior,menor);
    }else{
        printf("Esses números são iguais!\n");
    }

    printf("-----------------------------------------------\n");
}
