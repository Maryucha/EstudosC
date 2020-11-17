#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    float valor[6], valorTotal, disponivel = rand() %200 + 200;
    int pag, menu, qnt[6];
    char nome[10], retMenu;



        printf("========  Compras  ========\n");

        printf("\nOlá, qual o seu nome: ");
        scanf("%s", nome);
        printf("\nTudo bem Sr(a). \"%s\", fique a vontade.\n");

        printf("\nVocê tem R$\"%.2f\" disponiveis para gastar\n", disponivel);
    do{

        printf("\n Escolha os itens que deseja.\n");
        printf(" 1- Arroz\n");
        printf(" 2- Feijão\n");
        printf(" 3- Açucar\n");
        printf(" 4- Leite\n");
        printf(" 5- Cerveja\n");
        printf(" 6- Chocolate\n");
        printf(" Opção: ");
        fflush(stdin);
        scanf("%d", &menu);

        if(menu == 1){


            if(disponivel > 1.80){

                printf("\nValor do produto no varejo: R$ 1.30\n");
                printf("Valor do produto acima de 5 unidades: R$ 1.15\n");

                printf("\nQuantas unidades você gostaria de comprar: ");
                fflush(stdin);
                scanf("%d", &qnt[0]);

             if(qnt[0] >= 5){
                    valor[0] = 1.55;

                }else{
                    valor[0] = 1.80;
                }

                valorTotal += qnt[0]*valor[0];
            if (disponivel < (valor[0]*qnt[0])){

                    printf("Você não tem saldo suficiente para realizar a compra\n");
                    printf("Valor dos produtos: R$\"%.2f\"\n", valor[0]*qnt[0]);
                    printf("Saldo restante: R$\"%.2f\"\n", disponivel);
                }else{
                    disponivel -= qnt[0]*valor[0];
                }

                printf("\nVocê ainda tem R$%.2f para gastar\n", disponivel);

                printf("Gostaria de comprar mais algum item?(S/N): ");
                fflush(stdin);
                scanf("%c", &retMenu);
                retMenu = (retMenu == 's'|| retMenu == 'S')? 0 : 1;
                system("cls");

            }else{
                printf("\nVocê não tem saldo suficiente\n");

                printf("Gostaria de comprar mais algum item?(S/N): ");
                fflush(stdin);
                scanf("%c", &retMenu);
                retMenu = (retMenu == 's'|| retMenu == 'S')? 0 : 1;
                system("cls");
            }

            }else if(menu == 2){


            if(disponivel > 1.70){

                printf("\nValor do produto no varejo: R$ 1.30\n");
                printf("Valor do produto acima de 5 unidades: R$ 1.15\n");

                printf("\nQuantas unidades você gostaria de comprar: ");
                fflush(stdin);
                scanf("%d", &qnt[1]);

                if(qnt[1] >= 5){
                    valor[1] = 1.45;

                }else{
                    valor[1] = 1.70;
                }

                valorTotal += qnt[1]*valor[1];
                if (disponivel <(valor[1]*qnt[1])){

                    printf("Você não tem saldo suficiente para realizar a compra\n");
                    printf("Valor dos produtos: R$\"%.2f\"\n", valor[1]*qnt[1]);
                    printf("Saldo restante: R$\"%.2f\"\n", disponivel);
                }else{
                    disponivel -= qnt[1]*valor[1];
                }

                printf("\nVocê ainda tem R$%.2f para gastar\n", disponivel);

                printf("Gostaria de comprar mais algum item?(S/N): ");
                fflush(stdin);
                scanf("%c", &retMenu);
                retMenu = (retMenu == 's'|| retMenu == 'S')? 0 : 1;
                system("cls");


            }else{
                printf("\nVocê não tem saldo suficiente\n");

                printf("Gostaria de comprar mais algum item?(S/N): ");
                fflush(stdin);
                scanf("%c", &retMenu);
                retMenu = (retMenu == 's'|| retMenu == 'S')? 0 : 1;
                system("cls");
            }

            }else if(menu == 3){

            if(disponivel > 1.80){

                printf("\nValor do produto no varejo: R$ 1.30\n");
                printf("Valor do produto acima de 5 unidades: R$ 1.15\n");

                printf("\nQuantas unidades você gostaria de comprar: ");
                fflush(stdin);
                scanf("%d", &qnt[2]);

                if(qnt[2] >= 5){
                    valor[2] = 1.60;

                }else{
                    valor[2] = 1.80;
                }

                valorTotal += qnt[2]*valor[2];
                if (disponivel < (valor[2]*qnt[2])){

                    printf("Você não tem saldo suficiente para realizar a compra\n");
                    printf("Valor dos produtos: R$\"%.2f\"\n", valor[2]*qnt[2]);
                    printf("Saldo restante: R$\"%.2f\"\n", disponivel);
                }else{
                    disponivel -= qnt[2]*valor[2];
                }

                printf("\nVocê ainda tem R$%.2f para gastar\n", disponivel);

                printf("Gostaria de comprar mais algum item?(S/N): ");
                fflush(stdin);
                scanf("%c", &retMenu);
                retMenu = (retMenu == 's'|| retMenu == 'S')? 0 : 1;
                system("cls");

            }else{
                printf("\nVocê não tem saldo suficiente\n");

                printf("Gostaria de comprar mais algum item?(S/N): ");
                fflush(stdin);
                scanf("%c", &retMenu);
                retMenu = (retMenu == 's'|| retMenu == 'S')? 0 : 1;
                system("cls");
            }

            }else if(menu == 4){

            if(disponivel > 2.20){

                printf("\nValor do produto no varejo: R$ 1.30\n");
                printf("Valor do produto acima de 5 unidades: R$ 1.15\n");

                printf("\nQuantas unidades você gostaria de comprar: ");
                fflush(stdin);
                scanf("%d", &qnt[3]);

                if(qnt[3] >= 5){
                    valor[3] = 2.05;

                }else{
                    valor[3] = 2.20;
                }

                valorTotal += qnt[3]*valor[3];
                if (disponivel < (valor[3]*qnt[3])){

                    printf("Você não tem saldo suficiente para realizar a compra\n");
                    printf("Valor dos produtos: R$\"%.2f\"\n", valor[3]*qnt[3]);
                    printf("Saldo restante: R$\"%.2f\"\n", disponivel);
                }else{
                    disponivel -= qnt[3]*valor[3];
                }

                printf("\nVocê ainda tem R$%.2f para gastar\n", disponivel);

                printf("Gostaria de comprar mais algum item?(S/N): ");
                fflush(stdin);
                scanf("%c", &retMenu);
                retMenu = (retMenu == 's'|| retMenu == 'S')? 0 : 1;
                system("cls");


            }else{
                printf("\nVocê não tem saldo suficiente\n");

                printf("Gostaria de comprar mais algum item?(S/N): ");
                fflush(stdin);
                scanf("%c", &retMenu);
                retMenu = (retMenu == 's'|| retMenu == 'S')? 0 : 1;
                system("cls");
            }

            }else if(menu == 5){


            if(disponivel > 1.75){

                printf("\nValor do produto no varejo: R$ 1.30\n");
                printf("Valor do produto acima de 5 unidades: R$ 1.15\n");

                printf("\nQuantas unidades você gostaria de comprar: ");
                fflush(stdin);
                scanf("%d", &qnt[4]);

                if(qnt[4] >= 5){
                    valor[4] = 1.60;

                }else{
                    valor[4] = 1.75;
                }

                valorTotal += qnt[4]*valor[4];
                if (disponivel < (valor[4]*qnt[4])){

                    printf("Você não tem saldo suficiente para realizar a compra\n");
                    printf("Valor dos produtos: R$\"%.2f\"\n", valor[4]*qnt[4]);
                    printf("Saldo restante: R$\"%.2f\"\n", disponivel);
                }else{
                    disponivel -= qnt[4]*valor[4];
                }

                printf("\nVocê ainda tem R$%.2f para gastar\n", disponivel);

                printf("Gostaria de comprar mais algum item?(S/N): ");
                fflush(stdin);
                scanf("%c", &retMenu);
                retMenu = (retMenu == 's'|| retMenu == 'S')? 0 : 1;
                system("cls");


            }else{
                printf("\nVocê não tem saldo suficiente\n");

                printf("Gostaria de comprar mais algum item?(S/N): ");
                fflush(stdin);
                scanf("%c", &retMenu);
                retMenu = (retMenu == 's'|| retMenu == 'S')? 0 : 1;
                system("cls");
            }

            }else if(menu == 6){

            if(disponivel > 3.30){

                printf("\nValor do produto no varejo: R$ 1.30\n");
                printf("Valor do produto acima de 5 unidades: R$ 1.15\n");

                printf("\nQuantas unidades você gostaria de comprar: ");
                fflush(stdin);
                scanf("%d", &qnt[5]);

                if(qnt[5] >= 5){
                    valor[5] = 3.15;

                }else{
                    valor[5] = 3.30;
                }

                valorTotal += qnt[5]*valor[5];

                if (disponivel < (valor[5]*qnt[5])){

                    printf("Você não tem saldo suficiente para realizar a compra\n");
                    printf("Valor dos produtos: R$\"%.2f\"\n", valor[5]*qnt[5]);
                    printf("Saldo restante: R$\"%.2f\"\n", disponivel);
                }else{
                    disponivel -= qnt[5]*valor[5];
                }

                printf("\nVocê ainda tem R$%.2f para gastar\n", disponivel);

                printf("Gostaria de comprar mais algum item?(S/N): ");
                fflush(stdin);
                  scanf("%c", &retMenu);
                retMenu = (retMenu == 's'|| retMenu == 'S')? 0 : 1;
                system("cls");
            }

            }else{
                printf("\nOpção invalida\n");
        }

    }while(retMenu == 0);

        /*
        printf("\nO valor final de suas compras é %.2f\n", valorTotal);
        printf("\nQual a forma de pagamento ?\n");
        printf(" 1- Dinheiro\n");
        printf(" 2- Debito\n");
        printf(" 3- Credito\n");
        printf(" 4- Alimentação\n");
        printf(" Opção: ");
        scanf("%d", &pag);

        switch(pag){

            case 1:

            break;

            case 2:

            break;

            case 3:

            break;

            case 4:

            break;
        }

*/
}
