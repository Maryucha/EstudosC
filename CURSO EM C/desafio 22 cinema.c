#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <time.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("---------------------- \t *CIMEMA* -------------------------\n");
    time_t t;
    struct tm*hora;
    time(&t);
    hora=localtime(&t);
    int h = hora->tm_hour;
    //cabe�alho do programa
    printf("---------------------- *HORARIO DO FILME* -----------------\n");
    printf("\n");
    printf("Rei Le�o :\t19:30h\t\t PRE�O DO INGRESO R$20,00\n");
    printf("A Cabana :\t20:00h\t\t PRE�O DO INGRESO R$20,00\n");
    printf("Toy Story:\t21:00h\t\t PRE�O DO INGRESO R$20,00\n");
    printf("\n");
    printf("-------------------------- * CAIXA * ---------------------\n");
    printf("\n");
    printf("HORA ATUAL \t%i:27\n\n",h);
    //entrada de dados
    float grana;
    printf("Quanto dinheiro voc� tem? R$ ");
    fflush(stdin);
    scanf("%f",&grana);
    printf("\n");
    //CONDI��ES
    float troco;
    int inicio=15;
    int preco=20;

    if(h<inicio && grana>=preco){
        troco=(grana-preco);
        printf("Seu ingreso vai custar R$20,00 reais\n");
        printf("Seu troco ser� de R$%.2f reais\n",troco);

    }else if(grana<preco){
        printf("Saldo insuficiente!\n");
    }else{
        printf("Essa sess�o j� passou! \nAguarde a pr�xima.\n");
    }
}
