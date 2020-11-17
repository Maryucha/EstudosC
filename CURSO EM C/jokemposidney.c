#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int cpu, you;
    char resp, respCpu[7], respYou[7];

    cpu = rand()%3 +1;

    fflush(stdin);
    printf("\nEscolha pedra(1), papel(2) ou tesoura(3): ");
    fflush(stdin);
    scanf("%d", &you);

    switch(cpu){

        case 1:
            strcpy(respCpu, "pedra\n");
        break;

        case 2:
            strcpy(respCpu, "papel\n");
        break;

        case 3:
            strcpy(respCpu, "tesoura\n");
        break;

    }

    switch(you) {

        case 1:
            strcpy(respYou, "pedra");
        break;

        case 2:
            strcpy(respYou, "papel");
        break;

        case 3:
            strcpy(respYou, "tesoura");
        break;

    }

    if(cpu == 1 && you == 2){
        printf("\nParabens você ganhou\n");
        printf("\nVocê escolheu \"%s\" e o pc escolheu \"%s\"\n", respYou, respCpu);
        printf("Quer jogar novamente?(s/n): ");
        fflush(stdin);
        resp = getchar();

    }else if(you == 3 && cpu == 2){
        printf("\nParabens você ganhou\n");
        printf("\nVocê escolheu \"%s\" e o pc escolheu \"%s\"\n", respYou, respCpu);
        printf("Quer jogar novamente?(s/n): ");
        fflush(stdin);
        resp = getchar();

    }else if(cpu == 3 && you == 3){
        printf("\nParabens você ganhou\n");
        printf("\nVocê escolheu \"%s\" e o pc escolheu \"%s\"\n", respYou, respCpu);
        printf("Quer jogar novamente?(s/n): ");
        fflush(stdin);
        resp = getchar();
        fflush(stdin);

    }else if(you == 3 && cpu == 3){
        printf("\nTente novamente\n");
        printf("\nVocê escolheu \"%s\" e o pc escolheu \"%s\"\n", respYou, respCpu);
        printf("Quer jogar novamente?(s/n): ");
        fflush(stdin);
        resp = getchar();
        fflush(stdin);

    }else if(cpu == 2 && you == 1){
        printf("\nTente novamente\n");
        printf("\nVocê escolheu \"%s\" e o pc escolheu \"%s\"\n", respYou, respCpu);
        printf("Quer jogar novamente?(s/n): ");
        fflush(stdin);
        resp = getchar();
        fflush(stdin);

    }else if(cpu == 3 && you == 2){
        printf("\nTente novamente\n");
        printf("\nVocê escolheu \"%s\" e o pc escolheu \"%s\"\n", respYou, respCpu);
        printf("Quer jogar novamente?(s/n): ");
        fflush(stdin);
        resp = getchar();
        fflush(stdin);

    }else{
        printf("\nTente novamente\n");
        printf("\nVocê escolheu \"%s\" e o pc escolheu \"%s\"\n", respYou, respCpu);
        printf("Quer jogar novamente?(s/n): ");
        fflush(stdin);
        resp = getchar();
        fflush(stdin);
    }

    while(resp == 's' || resp == 'S'){

        printf("\nEscolha pedra(1), papel(2) ou tesoura(3): ");
        fflush(stdin);
        scanf("%d", &you);
        fflush(stdin);

        cpu = rand()%3 +1;

    switch(cpu){

        case 1:
            strcpy(respCpu, "pedra");
        break;

        case 2:
            strcpy(respCpu, "papel");
        break;

        case 3:
            strcpy(respCpu, "tesoura");
        break;

    }

    switch(you) {

        case 1:
            strcpy(respYou, "pedra");
        break;

        case 2:
            strcpy(respYou, "papel");
        break;

        case 3:
            strcpy(respYou, "tesoura");
        break;

    }

        if(cpu == 1 && you == 2){
            printf("\nParabens você ganhou\n");
            printf("\nVocê escolheu \"%s\" e o pc escolheu \"%s\"\n", respYou, respCpu);
            printf("Quer jogar novamente?(s/n): ");
            fflush(stdin);
            resp = getchar();

        }else if(cpu == 2 && you == 3){
            printf("\nParabens você ganhou\n");
            printf("\nVocê escolheu \"%s\" e o pc escolheu \"%s\"\n", respYou, respCpu);
            printf("Quer jogar novamente?(s/n): ");
            fflush(stdin);
            resp = getchar();

        }else if(cpu == 3 && you == 1){
            printf("\nParabens você ganhou\n");
            printf("\nVocê escolheu \"%s\" e o pc escolheu \"%s\"\n", respYou, respCpu);
            printf("Quer jogar novamente?(s/n): ");
            fflush(stdin);
            resp = getchar();

        }else if(cpu == 1 && you == 3){
            printf("\nTente novamente\n");
            printf("\nVocê escolheu \"%s\" e o pc escolheu \"%s\"\n", respYou, respCpu);
            printf("Quer jogar novamente?(s/n): ");
            fflush(stdin);
            resp = getchar();

        }else if(cpu == 2 && you == 1){
            printf("\nTente novamente\n");
            printf("\nVocê escolheu \"%s\" e o pc escolheu \"%s\"\n", respYou, respCpu);
            printf("Quer jogar novamente?(s/n): ");
            fflush(stdin);
            resp = getchar();

        }else if(cpu == 3 && you == 2){
            printf("\nTente novamente\n");
            printf("\nVocê escolheu \"%s\" e o pc escolheu \"%s\"\n", respYou, respCpu);
            printf("Quer jogar novamente?(s/n): ");
            fflush(stdin);
            resp = getchar();

        }else{
            printf("\nTente novamente\n");
            printf("\nVocê escolheu \"%s\" e o pc escolheu \"%s\"\n", respYou, respCpu);
            printf("Quer jogar novamente?(s/n): ");
            fflush(stdin);
            resp = getchar();
        }
        fflush(stdin);
    }
}
