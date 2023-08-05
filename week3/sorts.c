#include <stdio.h>
#include <stdbool.h>


void selectionSort();
void bubbleSort();

int main(void) {
    int array[] = {2,4,1,7,3,0};
    int array2[] = {1,4,2};
    printf("Selection Sort\n");
    selectionSort(array);
    printf("Bubble Sort\n");
    bubbleSort(array2);
    return 0;
}

void selectionSort(int array[]){
    int menor;
    for (int z = 0; z < 6; z++){
        menor = array[z];
        for (int i = 0+z; i < 6; i++){
            if (array[i] < menor) {
                menor = array[i];
                array[i] = array[z];
                array[z] = menor;
            }
        }
    }
    for (int i = 0; i<6;i++){
        printf("%d < ", array[i]);
    }
    printf("\n");
}

void bubbleSort(int array[]) {
    bool trocado = false;
    do {
        trocado = false;
        for (int i = 0; i < 3 - 1; i++) {
            if (array[i] > array[i+1]) {
                printf("(%i > %i) == true\n", array[i], array[i+1]);
                int tmp = array[i+1];
                array[i+1] = array[i];
                array[i] = tmp;
                trocado = true;
            } 
            else{printf("(%i > %i) == false\n", array[i], array[i+1]);}
        }
    } while (trocado);
    for (int i =  0; i < 3; i++){
        printf("%d < ", array[i]);
    }
}