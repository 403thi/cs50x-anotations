#include <stdio.h>

int main(void){
    char *nome = "thi";
    // pointer aritmetic sla como escreve em ingles
    // aritimetica dos ponteiro tlg
    printf("%c\n", * nome );   // t
    printf("%c\n", *(nome+1)); // h
    printf("%c\n", *(nome+2)); // i
    printf("%c\n", *(nome+3)); // \0
    printf("%c\n", *(nome+4)); // ??
    printf("%c\n", *(nome+5)); // ??
    printf("%c\n", *(nome+6)); // ??
    printf("%c\n", *(nome+7)); // ??
    printf("%c\n", *(nome+8)); // ??
    printf("%c\n", *(nome+9)); // ??

    return 0;
}