#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int n;
    printf("Digite um n�mero: \n");
    fflush(stdin);
    scanf("%d",&n);
    printf("Seu numero foi: \t%d\n",n);
    printf("O ANTECESSOR �: \t%d\n",n-1);
    printf("O SUCESSOR �: \t\t%d\n",n+1);
}
