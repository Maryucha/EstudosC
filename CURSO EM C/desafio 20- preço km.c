#include <stdio.h>
#include <locale.h>
#include <string.h>
float dist,preco,total;
void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("------------Preço viagem--------------\n");
    printf("\n");
    printf("*=========* TABELA DE PREÇO *=========*\n");
    printf("Viagemsaté 200Km \t\tR$0.50\KM\n");
    printf("Viagems acima de 200Km \t\tR$0.35\KM\n");
    printf("\n");
    printf("---------------------------------------\n");
    printf("Qual a distância da sua viagem: ");
    fflush(stdin);
    scanf("%f",&dist);
    if(dist<=200){
        preco=0.50;
    }else{
        preco=0.35;
    }
    total=dist*preco;
    printf("\n");
    printf("Uma viagem de %.1fKm vai custar R$%.2f/Km.\n",dist,preco);
    printf("--------------------------------------------\n");
    printf("A sua passagem portanto será de: R$%.2f reais.\n",total);
    }
