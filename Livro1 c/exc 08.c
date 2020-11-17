#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int base,altura;
    float area;
    printf("---------EXC 08-----------\n");
    printf("Digite a base do trinâgulo: ");
    fflush(stdin);
    scanf("%d",&base);
    printf("Digite a altura do triangulo: ");
    fflush(stdin);
    scanf("%d",&altura);
    area=(base*altura)/2;
    printf("a AREA do triangulo é %.1f",area);


}
