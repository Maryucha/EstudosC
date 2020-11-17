#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int raio;
    float pi=3.1415,area;
    printf("--------EXC 09----------\n");
    printf("Digite o raio do circulo: ");
    fflush(stdin);
    scanf("%d",&raio);

    area=pow(raio,2)*pi;
    printf("A area da circulo é: %.2f.\n",area);
}
