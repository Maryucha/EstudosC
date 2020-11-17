#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <time.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    time_t t;
    struct tm * data;
    time (&t);
    data = localtime (&t);
    int ano = data->tm_year + 1900;
    int anoNas;
    int idade;
    char nome[20];
    printf("====DESAFIO IDADE====\n");
    printf("----------------------\n");
    printf("\n");
    printf("Qual seu nome?");
    fflush(stdin);
    scanf("%s",nome);
    printf("-------------------------------\n");
    printf("%s Em que ano você nasceu: \n",nome);
    fflush(stdin);
    scanf("%d",&anoNas);
    idade=(ano-anoNas);
    printf("-------------------------------\n");
    printf("%s ,você tem %d anos.\n",nome,idade);
    if(idade<=57){
        printf("%s, Bem vindo ao banco estudonauta!\n",nome);
    }else if(idade>58&&idade<=65){
        printf("%s, Seja bem Vindo!\n",nome);
    }else{
        printf("%s, Seja vem vindo, dirija-se para a fila PREFERENCIAL\n",nome);
    }
    printf("-------------------------------\n");

}
