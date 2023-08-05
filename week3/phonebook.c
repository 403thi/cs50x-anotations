#include <stdio.h>
#include <string.h>

typedef struct {
    char *name;
    char *number;
} person;

int main(void){
    person contacts[2];
    contacts[0].name = "Ana";
    contacts[0].number = "4002-8922";
    contacts[1].name = "Bob";
    contacts[1].number = "1234-5678";
    char contact[30];
    printf("Contatos\n");
    for (int i = 0; i < 2; i++){
        printf("%d: %s\n", i+1, contacts[i]);
    }
    printf("Digite o nome do contato: ");
    scanf("%s", contact);
    
    for (int i = 0; i < 2; i++){
        if (strcmp(contacts[i].name, contact) == 0 ) {
            printf("Encontrado: %s\n", contacts[i].number);
            return 0;
        }
    }
    printf("Contato não encontrado\n");
    return 1;
}