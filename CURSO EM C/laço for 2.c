#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    printf("----------FOR----------\n");
    int i,tb;
    printf("Digite a tabuada que deseja praticar: ");
    fflush(stdin);
    scanf("%d",&tb);
    for(i=0;i<=10;++i){
        printf("%d x %d = %d\n",tb,i,tb*i);
    }
}
