#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
int res,n1,n2,z,x,y;
int preIn(int x,int y){

    int z;

    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("    PRÉ INCREMENTO\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("o valor PRÉ INCREMENTO de x é \"%d\"\n",++x);
    printf("o valor PRÉ INCREMENTO de y é \"%d\"\n",++y);
    z=x+y;
    printf("O valor de z=\"%d\"+\"%d\" \"%d\"\n",x,y,z);
    return(z);
}
int preDc(int x,int y){

    int z;

    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("\tPRÉ DECREMENTO\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("o valor PRÉ DECREMENTO de x é \"%d\"\n",--x);
    printf("o valor PRÉ DECREMENTO de y é \"%d\"\n",--y);
    z=x+y;
    printf("O valor de z=\"%d\"+\"%d\" \"%d\"\n",x,y,z);
    return(z);
}
int posIn(int x,int y){

    int z;

    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("    PÓS INCREMENTO\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("o valor PRÉ INCREMENTO de x é \"%d\"\n",x++);
    printf("o valor PRÉ INCREMENTO de y é \"%d\"\n",y++);
    z=x+y;
    printf("O valor de z=\"%d\"+\"%d\" \"%d\"\n",x,y,z);
    return(z);

}
int posDc(int x,int y){

    int z;

    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("    PÓS DECREMENTO\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("o valor PRÉ INCREMENTO de x é \"%d\"\n",x--);
    printf("o valor PRÉ INCREMENTO de y é \"%d\"\n",y--);
    z=x+y;
    printf("O valor de z=\"%d\"+\"%d\" \"%d\"\n",x,y,z);
    return(z);
}
int main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[10];
    char teste;
    printf("Testando Operadores de Atribuição\n");
    printf("==*==*==*==*==*==*==*==*==*==*==*\n");
    printf("Qual seu nome: ");
    fflush(stdin);
    scanf("%s",nome);
    printf("Olá %s vamos praticar lógica em C S/N?\n",nome);
    fflush(stdin);
    teste = getchar();
    while (teste != 's' && 'n'){
        printf("Opção invalida!\n");
        printf("Olá %s vamos praticar lógica em C S/N?\n",nome);
        fflush(stdin);
        teste = getchar();
    }
    printf("Muito bem vamos começar!\n");
    printf("==*==*==*==*==*==*==*==*==*==*==*\n");
    printf("\n");
    printf("Digite o valor de X: \n");
    fflush(stdin);
    scanf("%i",&x);
    printf("---------------------------------\n");
    printf("\n");
    printf("Digite o valor de Y: \n");
    fflush(stdin);
    scanf("%i",&y);
    printf("---------------------------------\n");
    int menu;
printf("============MENU==============\n");
printf("\tEscolha uma opção: \n");
printf("------------------------------\n");
printf("1: PRÉ INCREMENTO: \n");
printf("2: PRÉ DECREMENTO: \n");
printf("3: PÓS INCREMENTO: \n");
printf("4: PÓS DECREMENTO: \n");
printf("==============================\n");
    scanf("%d",&menu);
    if(menu==1){

        preIn(x, y);
    }
    if(menu==2){
        preDc(x, y);
    }
    if(menu==3){
        posIn(x, y);
    }
    if(menu==4){
        posDc(x, y);
    }
    getch();
}


