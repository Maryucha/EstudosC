#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int n1,n2,n3,maior,meio,menor;
    printf("------------PRATICAR OPERADORES CONDICIONAIS-----------------------\n");
    printf("\n");
    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d",&n1);

    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d",&n2);

    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d",&n3);

    printf("--------------------------------------------------------------------\n");

    if(n1>n2&&n2>n3){
        maior=n1;
        meio=n2;
        menor=n3;
        printf("A sequ�ncia correta � %d e %d e %d.\n",menor,meio,maior);
    }else if(n1>n3&&n3>n2){
        maior=n1;
        meio=n3;
        menor=n2;
        printf("A sequ�ncia correta � %d e %d e %d.\n",menor,meio,maior);
    }else if(n2>n1&&n1>n3){
        maior=n2;
        meio=n1;
        menor=n3;
        printf("A sequ�ncia correta � %d e %d e %d.\n",menor,meio,maior);
    }else if(n2>n3&&n3>n1){
        maior=n2;
        meio=n3;
        menor=n1;
        printf("A sequ�ncia correta � %d e %d e %d.\n",menor,meio,maior);
    }else if(n3>n1&&n1>n2){
        maior=n3;
        meio=n1;
        menor=n2;
        printf("A sequ�ncia correta � %d e %d e %d.\n",menor,meio,maior);
    }else if(n3>n2&&n2>n1){
        maior=n3;
        meio=n2;
        menor=n1;
        printf("A sequ�ncia correta � %d e %d e %d.\n",menor,meio,maior);
    }else{
        printf("Os n�meros %d e %d e %d s�o IGUAIS!\n",n1,n2,n3);
    }



}
