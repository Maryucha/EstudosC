#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int num;
    printf("---------- WHILE ---------------\n");
    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d",&num);



}
