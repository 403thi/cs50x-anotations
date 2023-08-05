#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *list = malloc(3*sizeof(int));
    if (list == NULL) {
        free(list);
        return 1;
    }
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    // um tempo depois...
    // oh no! preciso que esse array tenha mais um item

    /* MÉTODO 1
    int *tmp = malloc(4*sizeof(int));
    for (int i = 0; i < 3; i++) {
        tmp[i] = list[i];
    }
    */

   // realoco a lista com um tamanho maior nessa variavel temporaria
    int *tmp = realloc(list, 4*sizeof(int));

    // se a RAM estiver cheia
    if (tmp == NULL){
        free(list);
        return 1;
    }

    // adicionamos um novo elemento ao novo indice
    tmp[3] = 4;

    // trocamos o ponteiro da variavel inicial
    list = tmp;

    // printamos os valores! resultado esperado: 1 2 3 4
    for (int i = 0; i < 4; i++) {
        printf("%i\n", list[i]);
    }

    free(list);
    free(tmp);
    return 0;
}
