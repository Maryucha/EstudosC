#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    printf("-------------  while  --------------\n");
    printf("Enquanto X for MENOR que 10 print X.\n");

    int x=0;
    while (x<10){
        printf("%d é<10\n",x++);
    }

    printf("----------- FIM while ---------------\n");
    printf("10 não é <10.\n");
return 0;
}
