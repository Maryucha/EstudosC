#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    printf("--------- WHILE II -------------\n");
    int x=0;
    int valDigitado;
    printf("Digite quantas vezes voc� deseja repetir: ");
    fflush(stdin);
    scanf("%d",&valDigitado);
    while(x<=valDigitado){
        printf("%d *10 � %d \n",x,++x*10);
    }
return 0;
}
