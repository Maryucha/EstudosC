#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int c= rand()%6;
    int n;
    printf("====TENTE ADIVINHAR?====\n");
    printf("Qual número você acha que é: \n");
    scanf("%i",&n);
    fflush(stdin);
    printf("Eu penssei em %d e você em %d!\n",c,n);
    if (c==n){
        printf("Você acertou");
    }else{
        printf("Você errou!");
    }
}
