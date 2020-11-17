#include <stdio.h>
#include <locale.h>
void main(){
setlocale(LC_ALL, "Portuguese");
printf("=====VARIAVEIS=====");
unsigned int idade = 33;
float peso = 85.9;
char sexo = 'M';
char nome[] = "Juvenal";

printf("\n%s tem %i anos de idade, e seu peso é %.2fkg e seu sexo é %c", nome, idade, peso, sexo);
}
