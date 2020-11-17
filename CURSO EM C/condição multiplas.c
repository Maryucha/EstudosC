#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int num;

    printf("---------condição multipla------------\n");
    printf("Digite sum número: ");
    fflush(stdin);
    scanf("%d",&num);

    switch(num){
    case 1:
        printf("UM");
        break;
    case 2:
        printf("DOIS");
        break;
    case 3:
        printf("TRES");
        break;
    case 4:
        printf("QUATRO");
        break;

    default:
        printf("ERRO!");
        break;
    }


}
