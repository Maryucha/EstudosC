#include <stdio.h>
#include <locale.h>
void main(){
  setlocale(LC_ALL, "Portuguese");
  printf("A %s tem %d anos\n", "Maryucha", 31 );
  printf("Seu peso atual é de %6.2f kilos\n", 100.3);
  printf("O seu sexo é: %c",'F');
}
