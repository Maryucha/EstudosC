#include <stdio.h>
#include <locale.h>
#include <string.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    float num,res;
    printf("------------ INVERSO DE X -----------\n");
    printf("Digite um número positivo ou negativo: ");
    fflush(stdin);
    scanf("%f",&num);
    if(num>0){
        res=1/num;
        printf("O inverso de %.0f é igual a %.04f.\n",num,res);
    }else{
        res=num*(-1);
        printf("O inverso de %.0f é igual a %.0f.\n",num,res);
    }
}
