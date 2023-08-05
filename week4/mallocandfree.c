#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char *s1 = "hello World!";
    char *s2 = malloc(sizeof(*s1));
    if (s2 == NULL) {
        printf("Sem RAM disponivel!");
        return 1;
    }

    strcpy(s2, s1);
    printf("%d\n", strlen(s2));
    if (strlen(s2) > 0){
        s2[0] = toupper(s2[0]);
    }
    printf("S1: %s\n", s1);
    printf("S2: %s\n", s2);

    free(s2);
    
    return 0;
}