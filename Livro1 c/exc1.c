#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"portuguese");
    int n1,n2,n3,n4,s;
    printf("---------EXC 01---------\n");
    printf("Digite o valor de N1: ");
    fflush(stdin);
    scanf("%d",&n1);
    printf("-------------------------\n");
    printf("Digite o valor de N2: ");
    fflush(stdin);
    scanf("%d",&n2);
    printf("-------------------------\n");
    printf("Digite o valode de N3: ");
    fflush(stdin);
    scanf("%d",&n3);
    printf("-------------------------\n");
    printf("Digite o valor de N4: ");
    fflush(stdin);
    scanf("%d",&n4);
    printf("-------------------------\n");
    s=n1+n2+n3+n4;
    printf("A soma das variaveis é: %d",s);
}
