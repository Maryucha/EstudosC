#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    printf("-------- FOR -------\n");
    for(int i=0;i<=10;++i){
   //(inicio;critério,fim){
        printf("%d\n",i);
    }
    return 0;

}
