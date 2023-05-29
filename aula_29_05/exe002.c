#include <stdio.h>

/* PONTEIROS APONTANDO PARA VETORES*/

int main(){

    int n1[5] = {10,20,30,40};
    int* n2;

    n2 = n1; // equivalente a n2 = &n1[0];

    printf("Valor de n1: %d\n",n1);


    for(int i=0;i<4;i++){
        printf(" valores de n2: %d\n", *(n2 + i));
    }

    

    return 0;
}