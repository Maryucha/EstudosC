#include <stdio.h>
#include <locale.h>
void main(){
    char cid[10];
    setlocale(LC_ALL,"Portuguese");
    printf("----------- CIDADE BR -----------\n");
    printf("Voc� nasceu onde?");
    fflush(stdin);
    scanf("%s",&cid);
    if(cid=="sp"){
        printf("Voc� � Paulista");
    }else if(cid=="ac"){
        printf("");
    }else if(cid==""){
        printf("");
    }
    else{
        printf("Voc� veio do espa�o?");
    }



}
