#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("Digite um número: ");
    fflush(stdin);
    scanf("%i",&num);
    printf("O número que você digitou é %s.\n",(num%2==0)?"PAR":"ÍMPAR");
}
