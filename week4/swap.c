#include <stdio.h>

void swap(int *a, int *b);

int main(){
    int n1 = 10;
    int n2 = 20;
    printf("n1 é %i e n2 é %i\n", n1, n2);
    swap(&n1, &n2);
    printf("n1 é %i e n2 é %i\n", n1, n2);
    return 0;
}

void swap(int *a, int *b) { // ponteiro de int A e ponteiro de int B
    int tmp = *a; // int tmp recebe o VALOR do A
    *a = *b; // acessamos o VALOR de A e trocamos pelo VALOR de B
    *b = tmp; // acessmos o VALOR de B e trocamos pela variavel TMP
}