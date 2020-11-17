#include <stdio.h>
#include <locale.h>
#include <time.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    printf("--------- DATA DO SISTEMA --------------\n");
    time_t t;
    time(&t);
    struct tm*data;
    data=localtime(&t);
    int dia= data-> tm_mday;
    int mes=data->tm_mon;
    int ano=data->tm_year+1900;
    int hora=data->tm_hour;
    int min=data->tm_min;
    printf("DATA: \t\t%d/%d/%d \n",dia,++mes,ano);
    printf("HORÁRIO: \t%d:%d \n",hora,min);
}
