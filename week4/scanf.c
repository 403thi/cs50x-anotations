#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("%i\n", sizeof(char));
   // char *s = malloc(4  * sizeof(char));
   char s[4];
    printf("s: ");
    scanf("%s", s);
    printf("S: %s\n", s);

    return 0;
}