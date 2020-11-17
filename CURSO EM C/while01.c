#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    char resp;
    printf("Gabriela você quer casar comigo? ");
    fflush(stdin);
    scanf("%c",&resp);
    if (resp=='s'||'S'){
        printf("Que tal ano que vem? ");
    }


}
