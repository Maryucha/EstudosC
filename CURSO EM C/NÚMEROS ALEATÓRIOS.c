#include <stdio.h>
#include <locale.h>
#import <stdlib.h>
#import <time.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int n = rand()%11;
    printf("Eu gerei o número: (%d)",n);
}
