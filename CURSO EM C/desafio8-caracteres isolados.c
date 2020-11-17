#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    char letra;
    char antes;
    char depois;
    printf("Entre com uma LETRA: \n");
    scanf("%c",&letra);
    fflush(stdin);
    printf("A letra digitada foi (%c)\n",letra);
    antes=(letra-1);
    printf("A letra anterior é: %c\n",antes);
    depois=(letra+1);
    printf("A letra posterior é: %c\n",depois);

}
