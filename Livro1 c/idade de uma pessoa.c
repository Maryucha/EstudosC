#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"portuguese");
    printf("----------- IDADE ------------------\n");
    time_t t;
    time(&t);
    struct tm*data;
    data=localtime(&t);
    int ano=data->tm_year+1900;
    int anoNas;
    char nome[20];
    int idade;
    printf("Digite seu nome: ");
    fflush(stdin);
    scanf("%s",nome);
    printf("%s, em que ano você nasceu? ");
    fflush(stdin);
    scanf("%d",&anoNas);
    idade=ano-anoNas;
    printf("%s você tem %d anos de idade.",nome,idade);



}
