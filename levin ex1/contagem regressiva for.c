#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int num,cont;
    printf("----------- CONTAGEM REGRESSIVA ------------\n");
    printf("Voc� quer come�ar de qual n�mero: ");
    fflush(stdin);
    scanf("%d",&num);
    for(cont=num;cont>=1;cont--){
        printf("%d\n",cont);
    }
}
