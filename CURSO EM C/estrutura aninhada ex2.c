#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"portuguese");
    int n1,n2,n3,maior,menor,meio;
//####################################################3
    printf("----------COMPARANDO 3 N�MEROS --------------\n");
    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d",&n1);
    printf("Digite outro n�mero: ");
    fflush(stdin);
    scanf("%d",&n2);
    printf("Digite um outro n�mero: ");
    fflush(stdin);
    scanf("%d",&n3);
printf("------------------------------------\n");
//##########################################################
    if(n1>n2&&n2>n3){
        maior=n1;
        meio=n2;
        menor=n3;
        printf("E a sequ�ncia � %d-%d-%d.\n",menor,meio,maior);
    }else if(n1>n3&&n3>n2){
        maior=n1;
        meio=n3;
        menor=n2;
        printf("E a sequencia � %d-%d-%d.\n",menor,meio,maior);
    }else if(n2>n1&&n1>n3){
        maior=n2;
        meio=n1;
        menor=n3;
        printf("E a sequencia � %d-%d-%d.\n",menor,meio,maior);
    }else if(n2>n3&&n3>n1){
        maior=n2;
        meio=n3;
        menor=n1;
        printf("E a sequencia � %d-%d-%d.\n",menor,meio,maior);
    }else if(n3>n1&&n1>n2){
        maior=n3;
        meio=n1;
        menor=n2;
        printf("E a sequencia � %d-%d-%d.\n",menor,meio,maior);
    }else if(n3>n2&&n2>n1){
        maior=n3;
        meio=n2;
        menor=n1;
        printf("E a sequ�ncia � %d-%d-%d.\n",menor,meio,maior);
   }else{
        printf("Esses tr�s n�meros s�o IGUAIS.\n");
    }
}
