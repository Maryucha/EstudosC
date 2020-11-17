#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    float escada,ang,parede,rad;
    printf("-------------EXC 19 -----------------\n");
    printf("========= HIPOTENUSA ================\n");
    printf("Digite o angulo: ");
    fflush(stdin);
    scanf("%f",&ang);
    printf("Digite a altura da parede: ");
    fflush(stdin);
    scanf("%f",&parede);
    rad=ang*3.14/180;
    escada=parede/sin(rad);
    printf("A altura da sua escada será de %.2f metros.\n",escada);



}
