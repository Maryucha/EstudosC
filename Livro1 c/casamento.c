#include <stdio.h>
#include <locale.h>
#include <time.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    int ano1,ano2,casamento,idcasa,caId1,caId2,id1,id2;
    printf("---------------- CASADOS --------------\n");
    time_t t;
    time(&t);
    struct tm*data;
    data=localtime(&t);
    int ano=data->tm_year+1900;
    int mes=data->tm_mon;
    printf("Quando você nasceu: ");
    fflush(stdin);
    scanf("%d",&ano1);
    printf("Quando sua esposa nasceu: ");
    fflush(stdin);
    scanf("%d",&ano2);
    printf("---------------------------------------\n");
    printf("Quando vocês se casaram: ");
    fflush(stdin);
    scanf("%d",&casamento);
    printf("---------------------------------------\n");
    idcasa=ano-casamento;
    caId1=casamento-ano1;
    caId2=casamento-ano2;
    printf("Você casou aos %d anos de idade, e a sua esposa %d anos.\n",caId1,caId2);
    printf("---------------------------------------\n");
    id1=ano-ano1;
    id2=ano-ano2;
    printf("Vocês estão casadas há %d anos.\n",idcasa);
    printf("Você tem %d anos e sua esposa %d anos.\n",id1,id2);




}
