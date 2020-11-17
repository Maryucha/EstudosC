#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    printf("-------------* COMPRAR IDADE *-------------------\n");
    time_t t;
    time(&t);
    struct tm*data;
    data=localtime(&t);
    int ano=data->tm_year+1900;
    int mes=data->tm_mon;
    int ano1,ano2,idade1,idade2,mes1,mes2,difAno1,difAno2,difMes1,difMes2,mid1,mid2;
    char nome1[20],nome2[20];
    printf("Qual seu nome: ");
    fflush(stdin);
    scanf("%s",nome1);
    printf("%s em que ano você nasceu: ",nome1);
    fflush(stdin);
    scanf("%d",&ano1);
    printf("%s em que mês você nasceu: ",nome1);
    fflush(stdin);
    scanf("%d",&mes1);
    printf("------------------------------------------------\n");
    printf("Qual seu nome: ");
    fflush(stdin);
    scanf("%s",nome2);
    printf("%s em que ano você nasceu: ");
    fflush(stdin);
    scanf("%d",&ano2);
    printf("%s em que mês você nasceu: ",nome2);
    fflush(stdin);
    scanf("%d",&mes2);
    printf("------------------------------------------------\n");
    idade1=ano-ano1;
    idade2=ano-ano2;
    printf("------------------------------------------------\n");
    printf("A %s tem %d anos de idade, e ela nasceu em ",nome1,idade1);
    if(mes1==1){
       printf("Janeiro.\n");
    }else if(mes1==2){
        printf("Fevereiro.\n");
    }else if(mes1==3){
        printf("Março.\n");
    }else if(mes1==4){
        printf("Abril.\n");
    }else if(mes1==5){
        printf("Maio.\n");
    }else if(mes1==6){
        printf("Junho.\n");
    }else if(mes1==7){
        printf("Julho.\n");
    }else if(mes1==8){
        printf("Agosto.\n");
    }else if(mes1==9){
        printf("Setembro.\n");
    }else if(mes1==10){
        printf("Outubro.\n");
    }else if(mes1==11){
        printf("Novembro.\n");
    }else{
       printf("Dezembro.\n");
    }
    printf("A %s tem %d anos de idade, e ela nasceu em ",nome2,idade2);
    if(mes2==1){
       printf("Janeiro.\n");
    }else if(mes2==2){
        printf("Fevereiro.\n");
    }else if(mes2==3){
        printf("Março.\n");
    }else if(mes2==4){
        printf("Abril.\n");
    }else if(mes2==5){
        printf("Maio.\n");
    }else if(mes2==6){
        printf("Junho.\n");
    }else if(mes2==7){
        printf("Julho.\n");
    }else if(mes2==8){
        printf("Agosto.\n");
    }else if(mes2==9){
        printf("Setembro.\n");
    }else if(mes2==10){
        printf("Outubro.\n");
    }else if(mes2==11){
        printf("Novembro.\n");
    }else{
       printf("Dezembro.\n");
    }
     printf("------------------------------------------------\n");
     mid1=mes-mes1;
     mid2=mes-mes2;
     printf("A %s tem %d anos e %d meses.\n",nome1,idade1,mid1);
     printf("A %s tem %d anos e %d meses.\n",nome2,idade2,mid2);
     difAno1=idade1-idade2;
     difAno2=idade2-idade1;
     difMes1=mes2-mes1;
     difMes2=mes1-mes2;
     printf("------------------------------------------------\n");
     if(idade1>idade2){
        printf("A %s é mais velha, por %d anos.\n",nome1,difAno1);
     }else if(idade2>idade1){
         printf("A %s é mais velha, por %d anos.\n",nome2,difAno2);
     }else if(mid1>mid2){
         printf("A %s é a pessoa mais velha por %d meses.\n",nome1,difMes1);
     }else if(mid2>mid1){
         printf("A %s é a pessoa mais velha por %d meses.\n",nome2,difMes2);
     }else{
        printf("Essas pessoas tem a mesma idade.\n");
     }

}
