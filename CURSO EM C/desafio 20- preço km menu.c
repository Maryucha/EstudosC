#include <stdio.h>
#include <locale.h>
#include <string.h>
float preco;
int dist;
float total;
void main(){
    setlocale(LC_ALL,"Portuguese");
    int menu;
    printf("------------Pre�o viagem--------------\n");
    printf("\n");
    printf("*=========* TABELA DE PRE�O *=========*\n");
    printf("1: Viagens at� \t\t\t200km.\n");
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
    //printf("O valor da sua passagem � %f\n",preco);
    return (total);
}
float tev2(float preco, int dist){
    dist=250;
    preco=(dist*0.35);
    total=preco;
   // printf("O valor da sua passagem � %f\n",preco);
    return (total);
}
/*float tiv3(float preco, int dist){
    printf("Qual a dist�ncia que voc� vai percorrer?\n");
    fflush(stdin);
    scanf("%d",&dist);
    preco=(dist*0.35);
    total=preco;
    printf("O valor da sua passagem � %f\n",preco);
    return (total);
}*/
