#include <stdio.h>
#include <locale.h>
#include <string.h>
void main(){
    float vel;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite sua velocidade: ");
    fflush(stdin);
    scanf("%f",&vel);
    if (vel>80){
        printf("Você foi multado!\n");
    }else{
        printf("Diriga com cuidado!\n");
    }
}
