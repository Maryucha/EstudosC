#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    char a;
    char b;
    char resp;
    char cid[20];
    printf("Qual a sua cidade?\n");
    scanf("%s", cid);
    printf("você mora em %s\n", cid);
    printf("Digite uma letra: \n");
    fflush(stdin);
    scanf("%c",&a);
    printf("Digite outra letra: \n");
    fflush(stdin);
    scanf("%c",&b);
    printf("Você digitou as letras: %c e %c\n",a,b);

}
