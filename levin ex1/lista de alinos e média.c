#include <stdio.h>
#include <locale.h>
void main(){
setlocale(LC_ALL,"portuguese");
int idade,soma,count;
float media;
printf("---- IDADE E M�DIA------------\n");

printf("Digite a Idade do aluno: ");
    fflush(stdin);
    scanf("%d",&idade);

while(idade>0){
   soma+=idade;
   count++;
printf("Digite a Idade do aluno: ");
    fflush(stdin);
    scanf("%d",&idade);
}
media=soma/count;
printf("A m�dia de idade foi %.2f anos.",media);

}
