#include <stdio.h>


void troca(int *pt_n1, int *pt_n2);


int main(){

    int n1,n2;

    printf("Informe um valor para n1:\n");
    scanf("%d",&n1);

    printf("Informe um valor para n2:\n");
    scanf("%d",&n2);

    printf("Ordem informada: %d e %d\n",n1,n2);
    troca(&n1,&n2);
    printf("Ordem trocada: %d e %d\n",n1,n2);


    return 0;
}

void troca(int *pt_n1, int *pt_n2){
    int aux;

    aux = *pt_n1;
    *pt_n1 = *pt_n2;
    *pt_n2 = aux;
}