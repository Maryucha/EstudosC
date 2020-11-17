#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <time.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    time_t t;
    time(&t);
    struct tm*data;
    data=localtime(&t);
    int dia=data->tm_mday;
    int mes=data->tm_mon+1;
    int ano=data->tm_year+1900;
    int dse=data->tm_wday;
    char nome [20];
    printf("Qual seu nome: ");
    fflush(stdin);
    scanf("%s",nome);
    printf("%s, estamos no dia %d, do mês %d do ano de %d.\n",nome,dia,mes,ano);
    printf("%s, hojé é ",nome);
    if (dse==0){
        printf("Domingo");
    }else if(dse==1){
        printf("Segunda-Feira");
    }else if(dse==2){
        printf("Terça-Feira");
    }else if(dse==3){
        printf("Quarta-Feira");
    }else if(dse==4){
        printf("Quinta-Feira");
    }else if(dse==5){
        printf("Sexta-Feira");
    }else{
        printf("Sabado");
    }
printf(" dia  %d ",dia);
if (mes==1){
        printf("de JANEIRO");
    }else if(mes==2){
        printf("de FEVEREIRO");
    }else if(mes==3){
         printf("de MARÇO");
    }else if(mes==4){
         printf("de ABRIL");
    }else if(mes==5){
         printf("de MAIO");
    }else if(mes==6){
         printf("de JUNHO");
    }else if(mes==7){
         printf("de JULHO");
    }else if(mes==8){
         printf("de AGOSTO");
    }else if(mes==9){
         printf("de SETEMBRO");
    }else if(mes==10){
         printf("de OUTUBRO");
    }else if(mes==11){
         printf("de NOVEMBRO");
    }else{
         printf("de DEZEMBRO");
    }
printf(" do ano de %d.",ano);
}
