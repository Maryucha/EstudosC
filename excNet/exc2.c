#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    int n1,n2,n3,n4,soma;
    printf("----------- SOMA 3 NÚMEROS -------------\n");
    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d",&n1);

    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d",&n2);

    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d",&n3);

    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d",&n4);

    if(n1>n2&&n1>n3&&n1>n4){
            soma=n2+n3+n4;
        printf("A soma dos três MENORES é: %d.\n",soma);
    }else if(n2>n1&&n2>n3&&n2>n4){
        soma=n1+n3+n4;
        printf("A soma dos três MENORES é: %d.\n",soma);
    }else if(n3>n1&&n3>n2&&n3>n4){
        soma=n1+n2+n4;
        printf("A soma dos trÊs MENORES é: %d.\n",soma);
    }else if(n4>n1&&n4>n2&n4>n3){
        soma=n1+n2+n3;
        printf("A soma dos três MENORES é: %d.\n",soma);
    }else{
        printf("Esses números são iguais!");
    }


return 0;

}
