#include <stdio.h>

/*i.1 valor de um ponteiro eh seu endereco de memoria*/

int main(){

    printf("teste");

    int n1;
    int* n2;

    n1 = 10;
    n2 = &n1;

    printf("Valor de n1: %d\n",n1);
    printf("Endereco de n1: %d\n",&n1);
    printf("Endereco de n2: %d\n", n2); //i.1
    printf("Endereco de n2: %p\n", n2);
    printf("Valor apontado por n2: %d\n", *n2);

    return 0;
}