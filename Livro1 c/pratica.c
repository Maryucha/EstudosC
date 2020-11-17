#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int n1,n2,n3,maior,meio,menor;
    printf("------------PRATICAR OPERADORES CONDICIONAIS-----------------------\n");
    printf("\n");
    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d",&n1);

    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d",&n2);

    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d",&n3);

    printf("--------------------------------------------------------------------\n");

    if(n1>n2&&n2>n3){
        maior=n1;
        meio=n2;
        menor=n3;
        printf("A sequência correta é %d e %d e %d.\n",menor,meio,maior);
    }else if(n1>n3&&n3>n2){
        maior=n1;
        meio=n3;
        menor=n2;
        printf("A sequência correta é %d e %d e %d.\n",menor,meio,maior);
    }else if(n2>n1&&n1>n3){
        maior=n2;
        meio=n1;
        menor=n3;
        printf("A sequência correta é %d e %d e %d.\n",menor,meio,maior);
    }else if(n2>n3&&n3>n1){
        maior=n2;
        meio=n3;
        menor=n1;
        printf("A sequência correta é %d e %d e %d.\n",menor,meio,maior);
    }else if(n3>n1&&n1>n2){
        maior=n3;
        meio=n1;
        menor=n2;
        printf("A sequência correta é %d e %d e %d.\n",menor,meio,maior);
    }else if(n3>n2&&n2>n1){
        maior=n3;
        meio=n2;
        menor=n1;
        printf("A sequência correta é %d e %d e %d.\n",menor,meio,maior);
    }else{
        printf("Os números %d e %d e %d são IGUAIS!\n",n1,n2,n3);
    }



}
