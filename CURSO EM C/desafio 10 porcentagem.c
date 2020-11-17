#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    char produto[20];
    float preco,desc,novop;
    printf("Produto: \n");
    fflush(stdin);
    gets(produto);

    printf("Preço de %s: RS", produto);
    fflush(stdin);
    scanf("%f",&preco);

    printf("Valor do desconto: (%%) ");
    fflush(stdin);
    scanf("%f",&desc);

    novop=preco-(preco*desc/100);
    printf("O produto %s custava R$%.2f\n",produto ,preco);
    printf("Agora com o desconto de %.2f%%, passa a custar R$%.2f", desc, novop);

}
