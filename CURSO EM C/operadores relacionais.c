#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int a=5;
    int b=5;
    int c=(a==b);
    int d=(a>b);
    int e=(a<b);
    int f=(a>=b);
    int g=(a<=b);
    int h=(a!=b);

    printf("A=B \t%d\n",c);
    printf("A>B \t%d\n",d);
    printf("A<B \t%d\n",e);
    printf("A>=B \t%d\n",e);
    printf("A<=B \t%d\n",g);
    printf("A!=B \t%d\n",h);

}
