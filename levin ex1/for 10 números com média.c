#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int num,cont,soma=0;
    float media;
    printf("----------- FOR + SOMA + M�DIA -----------\n");
    for(cont=0;cont<=10;cont++){
        printf("Digite um n�mero: ");
        fflush(stdin);
        scanf("%d",&num);
        soma+=num;
    }
    printf("A soma dos n�meros printados foi: %d.\n",soma);
    media=soma/cont;
    printf("A m�dia dos n�meros printados foi %.2f.\n",media);
}
