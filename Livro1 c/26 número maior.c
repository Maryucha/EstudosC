#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int n1,n2,maior,menor;
    printf("----------ANALISANDO N�MEROS----------------\n");
    printf("\n");

    printf("Digite um n�mero INTEIRO: ");
    fflush(stdin);
    scanf("%d",&n1);

    printf("Digite um n�mero INTEIRO: ");
    fflush(stdin);
    scanf("%d",&n2);

    printf("---------------------------------------------\n");
    if(n1>n2){
        maior=n1;
        menor=n2;
        printf("O n�mero %d � maior que o n�mero %d.\n",maior,menor);
    }else if(n2>n1){
        maior=n2;
        menor=n1;
        printf("O n�mero %d � maior que o  n�mero %d.\n",maior,menor);
    }else{
        printf("Esses n�meros s�o iguais!\n");
    }

    printf("-----------------------------------------------\n");
}
