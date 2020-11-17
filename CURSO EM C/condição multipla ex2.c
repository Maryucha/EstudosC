#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int p;
    float terra,marte,jupiter,mercurio,saturno,venus,netuno,urano;
    char nome[20];
    printf("Qual seu nome: ");
    fflush(stdin);
    scanf("%s",nome);
    printf("Qual seu peso na TERRA:");
    fflush(stdin);
    scanf("%f",&terra);
    printf("----------PESO EM OUTROS PLANETAS----------\n");
    printf("1: MARTE:...\n");
    printf("2: JUPITER:...\n");
    printf("3: MERCURIO:...\n");
    printf("4: SATURNO:...\n");
    printf("5: VENUS:...\n");
    printf("6: NEUTUNO:...\n");
    printf("7: URANO:...\n");
    printf("---------------------------------------------\n");
    printf("Escolha o planeta que deseja:");
    fflush(stdin);
    scanf("%d",&p);
    printf("---------------------------------------------\n");
    switch(p){

case 1:
    marte=terra-(terra*38/100);
    printf("Olá %s seu peso em Marte é: %.2f.\n",nome,marte);
    break;
case 2:
    jupiter=terra+(terra+138/100);
    printf("Olá %s seu peso em JUPTER é: %.2f.\n",nome,jupiter);
    break;
case 3:
    mercurio=terra-(terra*38/100);
    printf("Olá %s seu peso em MERCURIO é : %.2f.\n",nome,mercurio);
    break;
case 4:
    saturno=terra-10;
    printf("Olá %s seu peso em SATURNO é: %.2f.\n",nome,saturno);
    break;
case 5:
    venus=terra-15;
    printf("Olá %s seu peso em VENUS é: %.2f.\n",nome,venus);
    break;
case 6:
    netuno=terra+5;
    printf("Olá %s seu peso em NETUNO é: %.2f.\n",nome,netuno);
    break;
case 7:
    urano=terra+7;
    printf("Olá %s seu peso em URANO é: %.2f.\n",nome,urano);
    break;
default:
    printf("ERRO!\n");
    break;

    }


}
