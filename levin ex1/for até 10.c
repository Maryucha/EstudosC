#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int cont,soma=0;
    for(cont=0;cont<=10;cont++){
        printf("%d\n",cont);
        soma+=cont;
    }
    printf("a soma foi %d.\n",soma);
}
