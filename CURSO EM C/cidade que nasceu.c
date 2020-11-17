#include <stdio.h>
#include <locale.h>
void main(){
    char cid[10];
    setlocale(LC_ALL,"Portuguese");
    printf("----------- CIDADE BR -----------\n");
    printf("Você nasceu onde?");
    fflush(stdin);
    scanf("%s",&cid);
    if(cid=="sp"){
        printf("Você é Paulista");
    }else if(cid=="ac"){
        printf("");
    }else if(cid==""){
        printf("");
    }
    else{
        printf("Você veio do espaço?");
    }



}
