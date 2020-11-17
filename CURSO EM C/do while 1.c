#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int n,cont=0;
    printf("--------- DO WHILE -----------\n");
    do{
       printf("Digite um número: \n");
       fflush(stdin);
       scanf("%d",&n);
       cont++;
       printf("%d\n",cont);
    }while(n!=0);



}
