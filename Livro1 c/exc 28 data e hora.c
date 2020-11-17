#include <stdio.h>
#include <locale.h>
#include <time.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int ano,dia,mes,hora,min;
    printf("---------------DATA E HORA -----------------------\n");
    printf("\n");
    time_t t;
    struct tm*data;
    time(&t);
    data=localtime(&t);
    ano=data->tm_year+1900;
    dia=data->tm_mday;
    mes=data->tm_mon;
    hora=data->tm_hour;
    min=data->tm_min;
    printf("Estamos no ano de: %d.\n",ano);
    printf("No mês de: %d.\n",mes);
    printf("No dia: %d.\n",dia);
    printf("Agora são %d:%d.\n",hora,min);
    printf("DATA: %d/%d/%d ás %d:%d horas.\n",dia,mes,ano,hora,min);
}
