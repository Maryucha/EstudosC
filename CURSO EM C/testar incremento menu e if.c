#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
int res,n1,n2,z,x,y;
int preIn(int x,int y){

    int z;

    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("    PR� INCREMENTO\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("o valor PR� INCREMENTO de x � \"%d\"\n",++x);
    printf("o valor PR� INCREMENTO de y � \"%d\"\n",++y);
    z=x+y;
    printf("O valor de z=\"%d\"+\"%d\" \"%d\"\n",x,y,z);
    return(z);
}
int preDc(int x,int y){

    int z;

    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("\tPR� DECREMENTO\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("o valor PR� DECREMENTO de x � \"%d\"\n",--x);
    printf("o valor PR� DECREMENTO de y � \"%d\"\n",--y);
    z=x+y;
    printf("O valor de z=\"%d\"+\"%d\" \"%d\"\n",x,y,z);
    return(z);
}
int posIn(int x,int y){

    int z;

    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("    P�S INCREMENTO\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("o valor PR� INCREMENTO de x � \"%d\"\n",x++);
    printf("o valor PR� INCREMENTO de y � \"%d\"\n",y++);
    z=x+y;
    printf("O valor de z=\"%d\"+\"%d\" \"%d\"\n",x,y,z);
    return(z);

}
int posDc(int x,int y){

    int z;

    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("    P�S DECREMENTO\n");
    printf("*==*==*==*==*==*==*==*==*==*==\n");
    printf("o valor PR� INCREMENTO de x � \"%d\"\n",x--);
    printf("o valor PR� INCREMENTO de y � \"%d\"\n",y--);
    z=x+y;
    printf("O valor de z=\"%d\"+\"%d\" \"%d\"\n",x,y,z);
    return(z);
}
int main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[10];
    char teste;
    printf("Testando Operadores de Atribui��o\n");
    printf("==*==*==*==*==*==*==*==*==*==*==*\n");
    printf("Qual seu nome: ");
    fflush(stdin);
    scanf("%s",nome);
    printf("Ol� %s vamos praticar l�gica em C S/N?\n",nome);
    fflush(stdin);
    teste = getchar();
    while (teste != 's' && 'n'){
        printf("Op��o invalida!\n");
        printf("Ol� %s vamos praticar l�gica em C S/N?\n",nome);
        fflush(stdin);
        teste = getchar();
    }
    printf("Muito bem vamos come�ar!\n");
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
printf("\tEscolha uma op��o: \n");
printf("------------------------------\n");
printf("1: PR� INCREMENTO: \n");
printf("2: PR� DECREMENTO: \n");
printf("3: P�S INCREMENTO: \n");
printf("4: P�S DECREMENTO: \n");
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


