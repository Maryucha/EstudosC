
#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    printf("------------ PATINHOS -----------\n");
    int pato;
    printf("Quantos patinhos a mam�e tem? ");
        fflush(stdin);
        scanf("%d",&pato);
    printf("----------------------------------\n");
    while(pato>1){
        printf("%d patinhos foram passear...\n",pato);
        printf("al�m das montanhas para brincar...\n");
        printf("a mam�e gritou qu� qu� qu�,qu�...\n");
        printf("mais s� %d patinhos voltaram de l�...\n\n",pato-1);
        pato--;

    }
printf("1 patinho foi passear...\n");
printf("al�m das montanhas para brincar\n");
printf("a mam�e gritou qu� qu� qu�,qu�...\n");
printf("mais nenhum patinho voltou de l�...\n\n");
printf("A mam�e patinho foi procurar\n");
printf("Al�m das montanhas\n");
printf("A mam�e gritou qua qua qua qua...\n");
printf("E os %d patinho voltaram de l�...\n",pato);


}
