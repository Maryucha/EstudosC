#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int n1,n2,n3;
    int maior,meio,menor;
    printf("-----CONDIÇÕES ANINHADAS-----\n");
    printf("Digite um número: ");
    fflush(stdin);
    scanf("%i",&n1);
    printf("Digite outro número: ");
    fflush(stdin);
    scanf("%i",&n2);
    printf("Digite outro número: ");
    fflush(stdin);
    scanf("%i",&n3);
    if(n1>n2&&n3<n2){
            maior=n1;
            meio=n2;
            menor=n3;
        printf("O número %i é o MAIOR!\n",maior);
        printf("O número %i é o MENOR!\n",menor);
    }else if(n2>n1&&n1<n3){
            maior=n2;
            meio=n3;
            menor=n1;
        printf("O número %i é o MAIOR!\n",maior);
        printf("O número %i é o MENOR!\n",menor);
    }else if(n3>n2&&n2<n1){
            maior=n3;
            meio=n1;
            menor=n2;
        printf("O número %i é o MAIOR!\n",maior);
        printf("O número %i é o MENOR!\n",menor);
    }else{
        printf("Esses números são IGUAIS!\n");
    }
    printf("----SEQUENCIA----\n");
    printf("A sequência correta é : %i , %i ,%i",menor,meio,maior);
}
