#include <stdio.h>
#include <locale.h>
#include <string.h>
float preco;
int dist;
float total;
void main(){
    setlocale(LC_ALL,"Portuguese");
    int menu;
    printf("------------Preço viagem--------------\n");
    printf("\n");
    printf("*=========* TABELA DE PREÇO *=========*\n");
    printf("1: Viagens até \t\t\t200km.\n");
    printf("2: Viagens acima de \t\t200km.\n");
    printf("3: Viagens acima de \t\t300km.\n");
    if(menu==1){
        tav1(preco,dist);
    }
    if(menu==2){
        tev2(preco,dist);
    }
    if(menu==3){
        tiv3(preco,dist);
    }
    printf("---------------------------------------\n");
}

float tav1(float preco, int dist){
    dist=200;
    preco=(dist*0.50);
    total=preco;
    //printf("O valor da sua passagem é %f\n",preco);
    return (total);
}
float tev2(float preco, int dist){
    dist=250;
    preco=(dist*0.35);
    total=preco;
   // printf("O valor da sua passagem é %f\n",preco);
    return (total);
}
/*float tiv3(float preco, int dist){
    printf("Qual a distância que você vai percorrer?\n");
    fflush(stdin);
    scanf("%d",&dist);
    preco=(dist*0.35);
    total=preco;
    printf("O valor da sua passagem é %f\n",preco);
    return (total);
}*/
