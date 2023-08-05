#include <stdio.h>
#include <string.h>

int main(void) {
    char *names[] = {"João", "Ana","Lucas", "Maria", "Felipe"};
    for (int i = 0; i < 5; i++) {
        if (strcmp(names[i], "Felipe") == 0){
            printf("Encontrado\n");
            return 0;
        }
    }
    printf("Não encontrado\n");
    return 1;
}