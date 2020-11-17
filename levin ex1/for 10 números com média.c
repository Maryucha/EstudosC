#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int num,cont,soma=0;
    float media;
    printf("----------- FOR + SOMA + MÉDIA -----------\n");
    for(cont=0;cont<=10;cont++){
        printf("Digite um número: ");
        fflush(stdin);
        scanf("%d",&num);
        soma+=num;
    }
    printf("A soma dos números printados foi: %d.\n",soma);
    media=soma/cont;
    printf("A média dos números printados foi %.2f.\n",media);
}
