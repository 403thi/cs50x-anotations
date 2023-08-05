#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int tree_value;

typedef struct node {
    tree_value value;
    struct node *right;
    struct node *left;
} node;

void print_tree(node *tree);
void free_tree(node *tree);
bool search(node *tree, int value);


int main(void) {
    // root node
    node *tree = malloc(sizeof(node));
    tree->value = 2;
    tree->right = NULL;
    tree->left = NULL;

    // left node
    node *n = malloc(sizeof(node));
    n->value = 1;
    n->left = NULL;
    n->right = NULL;
    tree->left = n;

    // right node
    n = malloc(sizeof(node));
    n->value = 3;
    n->left = NULL;
    n->right = NULL;
    tree->right = n;

    // print tree
    printf("tree:\n");
    print_tree(tree);

    // binary search
    int key = 1;
    printf("%d is in tree? ", key);
    if (search(tree, key)) {
        printf("YES.\n");
    } else {
        printf("NO.\n");
    }

    // free tree and ends program.
    free_tree(tree);
    return 0;
}

/*
prints all nodes of tree
*/
void print_tree(node *tree) {
    if (tree == NULL) {
        return;
    }
    // stack up left nodes
    // then, print it
    print_tree(tree->left);
    printf("%d\n", tree->value);
    // stack up right nodes
    print_tree(tree->right);

}

/*
free all nodes of tree
*/
void free_tree(node *tree) {
    if (tree == NULL) {
        return;
    }
    // stack up nodes and then free it
    free_tree(tree->right);
    free_tree(tree->left);
    free(tree);

}

/*
binary search in tree
*/
bool search(node *tree, int value) {
    if (tree == NULL) {
        // tree is end.
        return false;
    }

    // if value it's smaller than tree value, search in LEFT node
    if (value < tree->value) {
        return search(tree->left, value);
    }
    // but, if value it's bigger than tree value, search in RIGHT node.
    else if (value > tree->value) {
        return search(tree->right, value);
    }
    else {
        // is equals tree value
        return true;
    }
}