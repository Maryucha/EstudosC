#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int n1,n2,n3;
    int maior,meio,menor;
    printf("-----CONDI��ES ANINHADAS-----\n");
    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%i",&n1);
    printf("Digite outro n�mero: ");
    fflush(stdin);
    scanf("%i",&n2);
    printf("Digite outro n�mero: ");
    fflush(stdin);
    scanf("%i",&n3);
    if(n1>n2&&n3<n2){
            maior=n1;
            meio=n2;
            menor=n3;
        printf("O n�mero %i � o MAIOR!\n",maior);
        printf("O n�mero %i � o MENOR!\n",menor);
    }else if(n2>n1&&n1<n3){
            maior=n2;
            meio=n3;
            menor=n1;
        printf("O n�mero %i � o MAIOR!\n",maior);
        printf("O n�mero %i � o MENOR!\n",menor);
    }else if(n3>n2&&n2<n1){
            maior=n3;
            meio=n1;
            menor=n2;
        printf("O n�mero %i � o MAIOR!\n",maior);
        printf("O n�mero %i � o MENOR!\n",menor);
    }else{
        printf("Esses n�meros s�o IGUAIS!\n");
    }
    printf("----SEQUENCIA----\n");
    printf("A sequ�ncia correta � : %i , %i ,%i",menor,meio,maior);
}
