#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    setlocale(LC_ALL, "portuguese");

    float num1, num2;
    char oper, exit;

    printf("\n\t __ CALCULADORA __ \n\n");

    do{
        printf("\n    Digite o calculo que deseja realizar\n");
        printf("Ex. 2 x 2 || 2 / 2 || 2 + 2 || 2 - 2 || 2 %% 2\n\n");
        printf("Calculo: ");
        scanf(" %f %c %f", &num1, &oper, &num2);



        switch(oper){
            case 'x':
                printf("\nCalculando %.0f %c %.0f o resultado é = %.0f\n", num1, oper, num2, num1*num2);
            break;
            case '/':
                printf("\nCalculando %.2f %c %.2f o resultado é = %.2f\n", num1, oper, num2, num1/num2);
            break;
            case '+':
                printf("\nCalculando %.0f %c %.0f o resultado é = %.0f\n", num1, oper, num2, num1+num2);
            break;
            case '-':
                printf("\nCalculando %.0f %c %.0f o resultado é = %.0f\n", num1, oper, num2, num1-num2);
            break;
            case '%':
                printf("\nCalculando %.0f %c %.0f o resultado é = %.0f\n", num1, oper, num2, (int)num1%(int)num2);
            break;
            default:
                    printf("\nOperador invalido\n");
        }

        printf("\nPara voltar ao menu digite \"S\" ou para sair \"N\"\n");
        fflush(stdin);
        exit = getchar();

    }while(exit == 'S' || exit == 's');
}
