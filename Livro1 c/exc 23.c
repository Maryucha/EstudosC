#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    float custo,entrada;
    int qtd;
    printf("==*==*==**==*==*==*==*==*== SHOW *==*==*==*==*==*==*==*==*==\n");
    printf("Digite o custo do show: ");
    fflush(stdin);
    scanf("%f",&custo);
    printf("Digite o valor da entrada: ");
    fflush(stdin);
    scanf("%f",&entrada);
    qtd=custo/entrada;
    printf("==*==*==**==*==*==*==*==*==*==*==*==*==*==*==*==*==*==*==*==\n");
    printf("Parapagar o espetáculo teremos que vender %d ingressos.\n",qtd);
}
