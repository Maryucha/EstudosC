#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    float trab,ava,rec,m,tot1,tot2,tot3;
    int ps1,ps2,ps3,soma;

    printf("--------MÉDIA COM CONCEITO----------------\n");
    printf("\n");

    printf("Digite a nota do TRABALHO: ");
    fflush(stdin);
    scanf("%f",&trab);

    printf("Digite o peso do TRABALHO: ");
    fflush(stdin);
    scanf("%d",&ps1);

    printf("----------------------------------------\n");

    printf("Digite a nota da AVALIAÇÃO: ");
    fflush(stdin);
    scanf("%f",&ava);

    printf("Digite o peso da AVALIAÇÃO: ");
    fflush(stdin);
    scanf("%d",&ps2);

    printf("----------------------------------------\n");

    printf("Digite a nota da RECUPERAÇÃO: ");
    fflush(stdin);
    scanf("%f",&rec);

    printf("Digite o peso da RECUPERAÇÃO: ");
    fflush(stdin);
    scanf("%d",&ps3);

    printf("----------------------------------------\n");

    tot1=trab*ps1;
    tot2=ava*ps2;
    tot3=rec*ps3;
    soma=ps1+ps2+ps3;
    m=(tot1+tot2+tot3)/soma;
    printf("A média do aluno foi %.2f.\n",m);

    printf("----------------------------------------\n");

    if(m>=8&&m<=10){
        printf("O conceito obtido foi A");
    }else if(m>=7&&m<8){
        printf("O conceito obtido foi B");
    }else if(m>=6&&m>7){
        printf("O conceito obtido foi C");
    }else if(m>=5&&m>6){
        printf("O conceito obtido foi D");
    }else{
        printf("O conceito obtido foi E");
    }

}
