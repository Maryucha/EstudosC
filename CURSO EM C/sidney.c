#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    char nome[30], nome_1[30], nome_2[30];
    char sexo, sexo_1, sexo_2;
    float nota, nota_1, nota_2;

      printf("<<< EX004 >>>\n");
      printf("\nCadastrando a primeira pessoa\n");
      printf("-------------------------------\n");

      printf("\nNOME: ");
      gets(nome);

      printf("SEXO [M/F]: ");
      fflush(stdin);
      sexo = getchar();

      if(sexo == 'm'){
          sexo += -32;

      }else if(sexo == 'f'){
          sexo += -32;
      }

    while(sexo != 'M' && sexo != 'F'){

      printf("\nOpção invalida\n");

      printf("SEXO [M/F]: ");
      fflush(stdin);
      sexo = getchar();

      if(sexo == 'm'){
          sexo += -32;

      }else if(sexo == 'f'){
          sexo += -32;
      }
    }

    printf("NOTA: ");
    fflush(stdin);
    scanf("%f", &nota);

  while(nota > 10){

    printf("Opção invalida\n");

    printf("NOTA: ");
    fflush(stdin);
    scanf("%f", &nota);

  }

      printf("\nCadastrando a segunda pessoa\n");
      printf("-------------------------------\n");

      printf("\nNOME: ");
      fflush(stdin);
      gets(nome_1);

      printf("SEXO [M/F]: ");
      fflush(stdin);
      sexo_1 = getchar();

      if(sexo_1 == 'm'){
          sexo_1 += -32;

      }else if(sexo_1 == 'f'){
          sexo_1 += -32;
      }

    while(sexo_1 != 'M' && sexo_1 != 'F'){

      printf("\nOpção invalida\n");

      printf("SEXO [M/F]: ");
      fflush(stdin);
      sexo_1 = getchar();

      if(sexo_1 == 'm'){
          sexo_1 += -32;

      }else if(sexo_1 == 'f'){
          sexo_1 += -32;
      }
    }

    printf("NOTA: ");
    fflush(stdin);
    scanf("%f", &nota_1);

  while(nota_1 > 10){

    printf("Opção invalida\n");

    printf("NOTA: ");
    fflush(stdin);
    scanf("%f", &nota_1);

  }

      printf("\nCadastrando a terceira pessoa\n");
      printf("-------------------------------\n");

      printf("\nNOME: ");
      fflush(stdin);
      gets(nome_2);

      printf("SEXO [M/F]: ");
      fflush(stdin);
      sexo_2 = getchar();

      if(sexo_2 == 'm'){
          sexo_2 += -32;

      }else if(sexo_2 == 'f'){
          sexo_2 += -32;
      }

    while(sexo_2 != 'M' && sexo_2 != 'F'){

      printf("\nOpção invalida\n");

      printf("SEXO [M/F]: ");
      fflush(stdin);
      sexo_2 = getchar();

      if(sexo_2 == 'm'){
          sexo_2 += -32;

      }else if(sexo_2 == 'f'){
          sexo_2 += -32;
      }
    }

    printf("NOTA: ");
    fflush(stdin);
    scanf("%f", &nota_2);

  while(nota_2 > 10){

    printf("Opção invalida\n");

    printf("NOTA: ");
    fflush(stdin);
    scanf("%f", &nota_2);

  }

    printf("\n=======LISTA COMPLETA=======\n");

    printf("\nNOME\t\tSEXO\tNOTA\n");

    printf("\n%s \t\t %c\t%.1f", nome, sexo, nota);
    printf("\n%s \t\t %c\t%.1f", nome_1, sexo_1, nota_1);
    printf("\n%s \t\t %c\t%.1f\n", nome_2, sexo_2, nota_2);

}
