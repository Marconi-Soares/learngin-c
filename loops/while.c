#include <stdio.h>
#include <string.h>

int main(void) {
    short len = 0;
    char name[25];

    while (len == 0) {
        printf("Digite seu nome: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';

        len = strlen(name);
    }

    printf("Olá, %s\n", name);
    return 0;
}
