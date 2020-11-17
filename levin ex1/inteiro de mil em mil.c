#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    printf("-------------- FOR de 3 em 3-------------------\n");
    int cont;
    for(cont=0;cont<333;cont+=3){
        printf("%d\n",cont);
    }

}
