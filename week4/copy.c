#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
    char *s1 = "hi!";
    char *s2 = s1;

    printf("%p\n", s1);
    printf("%p\n", s2);

    s2[0] = toupper(s2[0]);
    
    printf("s1> %s\n", s1);
    printf("s2> %s\n", s2);
    return 0;
}