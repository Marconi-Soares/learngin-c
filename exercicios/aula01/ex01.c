// Crie um script Python que leia o nome de uma pessoa e mostra uma msg
// de boas-vindas de acordo com o valor digitado.
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[25];
    printf("===== DESAFIO 01 ====\n");
    printf("Qual é o seu nome? ");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';
    
    printf("Olá %s ! Prazer em te conhecer!\n", name);
    return 0;
}
