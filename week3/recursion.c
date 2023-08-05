#include <stdio.h>

void draw(int largura);

int main(void) {
    int largura;
    printf("Largura: ");
    scanf("%i", &largura);
    draw(largura);
    return 0;
}

void draw(int largura){
    if (largura <= 0 ){
        return;
    }
                            // considerando largura como 4:
    // printf("%i\n", largura) // vai dar 4,3,2,1
    draw(largura-1);
    // draw vai chamando ele mesmo (recursão) com o próprio argumento -1
    // ele vai chamando e chamando até chegar ao final
    // e ele vai continuar daqui pra baixo do ultimo draw chamado até o primeiro
    // printf("%i\n", largura) // vai dar 1,2,3,4
    for (int i=0; i< largura; i++){
        printf("#");
    }
    printf("\n");
}