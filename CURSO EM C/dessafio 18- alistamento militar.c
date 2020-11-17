#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <time.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    time_t t;
    struct tm* data;
    time(&t);
    data = localtime (&t);
    int ano = data->tm_year + 1900;
    int anoNas;
    char nome[20];
    int idade;
    int falta;
    int faz;
    printf("--------ALISTAMENTO MILITAR--------\n");
    printf("\n");
    printf("Qual seu nome:");
    fflush(stdin);
    scanf("%s",nome);
    printf("----------------------------------\n");
    printf("\n");
    printf("Em que ano você nasceu?");
    fflush(stdin);
    scanf("%d",&anoNas);
    printf("----------------------------------\n");
    printf("\n");
    idade=(ano-anoNas);
    printf("%s você tem %d anos.\n",nome,idade);
    if(idade<18){
            falta=(18-(ano-anoNas));
        printf("%s ainda faltam %d anos, para você se alistar!\n",nome,falta);
    }else if(idade==18){
        printf("%s Você deve se alistar esse ano!",nome);
    }else{
        faz=(ano-anoNas-18);
        printf("%s você se alistou faz %d anos!\n",nome,faz);
    }

    }

