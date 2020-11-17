#include <stdio.h>
#include <locale.h>
char n1[30];
char s1;
float no1;
char n2[30];
char s2;
float no2;
char n3[30];
char s3;
float no3;
void main(){
setlocale(LC_ALL,"Portuguese");
printf("--------------------------\n");
printf("Cadastrando 1 Pessoa:\n");
printf("--------------------------\n");

printf("NOME: ");
fflush(stdin);
scanf("%s",n1);

printf("SEXO [M/F]:");
fflush(stdin);
scanf("%c",&s1);

printf("NOTA: ");
fflush(stdin);
scanf("%f",&no1);
printf("--------------------------\n");
printf("Cadastrando 2 Pessoa:\n");
printf("--------------------------\n");

printf("NOME: ");
fflush(stdin);
scanf("%s",n2);

printf("SEXO [M/F]:");
fflush(stdin);
scanf("%c",&s2);

printf("NOTA: ");
fflush(stdin);
scanf("%f",&no2);
printf("--------------------------\n");
printf("Cadastrando 3 Pessoa:\n");
printf("--------------------------\n");

printf("NOME: ");
fflush(stdin);
scanf("%s",n3);

printf("SEXO [M/F]:");
fflush(stdin);
scanf("%c",&s3);

printf("NOTA: ");
fflush(stdin);
scanf("%f",&no3);
printf("------------------------------------\n");
printf("=======LISTAGEM DE ALUNOS===========\n");
printf("------------------------------------\n");
printf("NOME    SEXO    NOTA\n");
printf("*%-20s  %c  %2.1f\n",n1,s1,no1);
printf("*%-20s  %c  %2.1f\n",n2,s2,no2);
printf("*%-20s  %c  %2.1f",n3,s3,no3);

}
