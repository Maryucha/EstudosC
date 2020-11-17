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
    char dS [15];
    printf("Qual seu nome: ");
    fflush(stdin);
    scanf("%s",nome);
    if (mes==1){
        nM=("JANEIRO");
    }else if(mes==2){
        nM=("FEVEREIRO");
    }else if(mes==3){
         nM=("MARÇO");
    }else if(mes==4){
         nM=("ABRIL");
    }else if(mes==5){
         nM=("MAIO");
    }else if(mes==6){
         nM=("JUNHO");
    }else if(mes==7){
         nM=("JULHO");
    }else if(mes==8){
         nM=("AGOSTO");
    }else if(mes==9){
         nM=("SETEMBRO");
    }else if(mes==10){
         nM=("OUTUBRO");
    }else if(mes==11){
         nM=("NOVEMBRO");
    }else{
         nM=("DEZEMBRO");
    }
    printf("%s, estamos no dia %d, do mês %s do ano de %d\n",nome,dia,nM,ano);
    if (dse==0){
        dS="Domingo";
    }else if(dse==1){
        dS="Segunda-Feira";
    }else if(dse==2){
        dS="Terça-Feira";
    }else if(dse==3){
        dS="Quarta-Feira";
    }else if(dse==4){
        dS="Quinta-Feira";
    }else if(dse==5){
        dS="Sexta-Feira";
    }else{
        dS="Sabado";
    }
}
