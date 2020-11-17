#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int escada,parede;
    float distancia,dist;
    printf("--------- EXC 20 -------------\n");
    printf("Digite o tamanho da escada: ");
    fflush(stdin);
    scanf("%d",&escada);
    printf("Digite a altura da parede: ");
    fflush(stdin);
    scanf("%d",&parede);
    dist=pow(escada,2)- pow(parede,2);
    distancia=sqrt(dist);
    printf("A distância da parede é de %.2f metros.",distancia);

}
