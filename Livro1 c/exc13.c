#include <stdio.h>
#include <locale.h>
#include <time.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int anoNa;
    time_t t;
    time(&t);
    struct tm*data;
    data=localtime(&t);
    int anoAt=data->tm_year+1900;
    int idade;
    printf("-----------EXC 13 -----------\n");
    printf("Em que ano você nasceu: ");
    fflush(stdin);
    scanf("%d",&anoNa);
    idade = anoAt-anoNa;
    printf("Você tem %d anos de idade.\n",idade);




}
