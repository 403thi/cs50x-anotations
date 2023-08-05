#include <stdio.h>
#include <stdlib.h>

int search(int *array, int key, int half_index);
size_t get_half(int array_size);


int main() {
    // int array[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int array[] = {20,25,30,45,80};
    size_t half_index = get_half(sizeof(array));
    int key = 25;
    printf("Procurando por: %d\n", key);
    if (search(array, key, half_index)) {
        printf("Esta no array!\n");
    } else {
        printf("Não esta no array!\n");
    }
    return 0;
}

/*
search a item in a ordened array. 
return 1 if item exists, else, return 0
 */
int search(int *array, int key, int half_index) {
    printf("Procurando: %d no index %d\n", array[half_index], half_index);
    if (array[half_index] == key) {
        return 1;
    }
    if (half_index == 0) {
        return 0;
    }
    if (array[half_index] > key) {
        int left_of_array[half_index];
        for (int i = 0; i < half_index; i++) {
            // printf("%d-", array[i]);
            left_of_array[i] = array[i];
        }
        search(left_of_array, key, get_half(sizeof(left_of_array)));
    }
    else if (array[half_index] < key) {
        int right_of_array[half_index];
        int array_size = half_index % 2 == 0 ? 
                half_index * 2   :
                (half_index * 2) - 1;
        for (int array_index = half_index+1, count = 0; array_index <= array_size; array_index++, count++) {
            right_of_array[count] = array[array_index];
        }
        search(right_of_array, key, get_half(sizeof(right_of_array)));
        // return 0;
    }
}


size_t get_half(int array_size) {
    return (array_size / sizeof(int)) / 2;
}