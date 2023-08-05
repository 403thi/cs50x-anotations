#include <stdio.h>
#include <stdlib.h>

int main(){
    int *x = malloc(3 * sizeof(int)); // ponteiro que aponta para um int, para uma memoria alocada para o tamanho de 3 ints
    x[0] = 10;
    x[1] = 12;
    x[2] = 15;
    // x[3] = 20; // Buffer Overflow!!
    free(x);
    return 0;
}