#include <stdio.h>


int main(void){
    int numbers[] = {1,5,2,8,4,0,3};
    for (int i = 0; i < 7; i++){
        if (numbers[i] == 0) {
            printf("Encontrado\n");
            return 0;            
        }
    }
    printf("Não encontrado\n");
    return 1;
}