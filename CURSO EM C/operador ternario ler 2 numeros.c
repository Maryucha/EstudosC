#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int n1,n2;
    printf("==================================\n");
    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d",&n1);
    printf("==================================\n");
    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d",&n2);
    printf("==================================\n");
    int maior = (n1>n2)?n1:n2;
    int menor = (n1>n2)?n2:n1;
    int igual = (n1==n2)?"IGUAIS":"DIFERENTES";
    printf("Entre %d e %d o n�mero MAIOR �: %d\n",n1,n2,maior);
    printf("Entre %d e %d o n�mero MENOR �: %d\n",n1,n2,menor);
    printf("Os n�meros %d e %d s�o: %s\n",n1,n2,igual);
    printf("==================================\n");


}
