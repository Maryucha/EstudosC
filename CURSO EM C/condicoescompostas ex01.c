#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int n1,n2,n3;
    int maior;
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
    if(n1>n2&&n1>n3){
            maior=n1;
        printf("O número %i é o MAIOR!",maior);
    }else if(n2>n3&&n2>n1){
            maior=n2;
        printf("O número %i é o MAIOR!",maior);
    }else if(n3>n1&&n3>n2){
            maior=n3;
        printf("O número %i é o MAIOR!",maior);
    }else{
        printf("Esses números são IGUAIS!");
    }
}
