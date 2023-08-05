#include <stdio.h>

int main(){
    int n = 0x32; // 50
    int *ponteiro = &n;
    typedef char *str;
    str nome = "thi";
    printf("nome:%s\n", nome);
    char *string = "Hello, World!\n";
    char *ponteirochar = &string[0];

    printf("%s", string);
    printf("Ponteiro pro char:\t %p\n", ponteirochar);
    printf("Ponteiro pra string:\t %p\n", string);
    printf("Acessar endereço do char: %c\n", *ponteirochar);
    /* printf("%i\n", n);
    printf("%p\n", ponteiro);
    printf("%p\n", &ponteiro); // ponteiro do ponteiro
    printf("%i\n", *ponteiro); */
    return 0;
}