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
    printf("Qual n�mero voc� acha que �: \n");
    scanf("%i",&n);
    fflush(stdin);
    printf("Eu penssei em %d e voc� em %d!\n",c,n);
    if (c==n){
        printf("Voc� acertou");
    }else{
        printf("Voc� errou!");
    }
}
