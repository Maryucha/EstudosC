#include <stdio.h>
#include <locale.h>
#include <time.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    printf("----------- idade duas pessoas --------------\n");
    time_t t;
    time(&t);
    struct  tm*data;
    data=localtime(&t);
    int ano=data->tm_year+1900;
    int ano1,ano2,idade1,idade2,veio,novo,dife;
    char nome1[20],nome2[20];
    printf("Digite seu nome: ");
    fflush(stdin);
    scanf("%s",nome1);
    printf("%s em que ano você nasceu: ",nome1);
    fflush(stdin);
    scanf("%d",&ano1);
    idade1=ano-ano1;
    printf("----------------------------------------------\n");
    printf("Digite seu nome: ");
    fflush(stdin);
    scanf("%s",nome2);
    printf("%s em que ano você nasceu: ",nome2);
    fflush(stdin);
    scanf("%d",&ano2);
    idade2=ano-ano2;
    printf("----------------------------------------------\n");
    printf("%s você tem %d anos de idade.\n",nome1,idade1);
    printf("%s você tem %d anos de idade.\n",nome2,idade2);
    printf("----------------------------------------------\n");
    if(idade1>idade2){
            veio=idade1;
            novo=idade2;
            dife=idade1-idade2;
        printf("A %s é a pessoa mais velha, por %d anos.\n",nome1,dife);
        printf("----------------------------------------------\n");
    }else if(idade2>idade1){
        veio=idade2;
        novo=idade1;
        dife=idade2-idade1;
        printf("A %s é a pessoa mais velha, por %d anos.\n",nome2,dife);
        printf("----------------------------------------------\n");
    }else{
        printf("As duas pessoas tem a mesma idade!\n");
        printf("----------------------------------------------\n");
    }


}
