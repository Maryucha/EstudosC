#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int n=rand()%5;
    int a=n-1;
    int b=n+1;
    printf("O antessesor de %d é %d\n",n, a);
    printf("O sucessesor de %d é %d\n",n, b);
}
