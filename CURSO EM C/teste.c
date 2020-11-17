#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Sydnei tem %d anos de idade", 25);
}
