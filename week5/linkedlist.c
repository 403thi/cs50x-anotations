#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} node;

void append(node *list, int value);
void insert(node *list, int value);

int main(void) {

    // init a linked list with initial value 0
    node *list = malloc(sizeof(node));
    if (list == NULL) {
        return 1;
    }
    list->next = NULL;
    list->value = 0;

    // add values in list
    append(list, 20);
    append(list, 110);
    append(list, 30);
    insert(list, 3);
    insert(list, 2);

    // print all values of list
    for (node *tmp = list; tmp!=NULL; tmp = tmp->next) {
        printf("%d\n", tmp->value);   
    }
    
    // free all items
    while (list != NULL) {
        node *next = list->next;
        printf("removendo: %d\n", list->value);
        free(list); // free the first node
        list = next;
    }

    return 0;
}

/*
add node in last position
*/
void append(node *list, int value) {
    node *tmp = list;

    // get next to last node   
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }

    // change last node (NULL) to a valid node
    node *last_tmp = malloc(sizeof(node));
    tmp->next = last_tmp;
    tmp->next->value = value;
    tmp->next->next = NULL;
}

/*
add a node in second position
*/
void insert(node *list, int value) {
    node *tmp = list->next;
    list->next = malloc(sizeof(node));
    list->next->next = tmp;
    list->next->value = value;
}