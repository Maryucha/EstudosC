#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int tab,cont,resp;
    printf("------------- FOR --------------\n");
    while(tab>0){
    printf("Qual tabuada deseja aprender: ");
    fflush(stdin);
    scanf("%d",&tab);
    for(cont=1;cont<=10;cont++){
            resp=tab*cont;
    printf("%d x %d = %d \n",tab,cont,resp);

    }
    }
}
