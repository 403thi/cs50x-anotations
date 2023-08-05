#include <stdio.h>
#include <string.h>

int strcompare(char *s1, char *s2) {
    if (strlen(s1) != strlen(s1)){
        return -1;
    }
    for (int i = 0; i < strlen(s1); i++){
        if (s1[i] != s2[i]) {
            return -1;
        }
    }
    return 0;
}

int main(void){
    char *s1 = "HI!";
    char *s2 = "HI!";
    
    // if (strcmp(s1,s2)==0){
    if (strcompare(s1,s2)==0){
        printf("Iguais!\n");
    } else {
        printf("Diferentes!\n");
    }
    return 0;
}
