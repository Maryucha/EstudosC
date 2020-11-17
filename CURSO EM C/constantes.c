#include <stdio.h>
#include <locale.h>
#define MAI 21
const int MOU = 12;
const int TOTAL = 15;
void main (){
setlocale(LC_ALL, "Portuguese");
    printf("MAI = %d\n", MAI);
    printf("MOU = %d\n", MOU);
    printf("TOTAL = %d", TOTAL);
}
