// Crie um script Python que leia o dia, o mês e o ano de nascimento de uma pessoa
// e mostre uma mensagem com a data formatada.

#include <stdio.h>

int main(void)
{
    short day;
    short year;
    char month[4]; // Deve ser 4 para armazenar o '\0' como final da string.

    printf("==== DESAFIO 02 ====\n");
    printf("Dia = ");
    scanf("%hd", &day);
    
    printf("Mês = ");
    scanf("%3s", month);

    printf("Ano = ");
    scanf("%hd", &year);

    printf("Você nasceu no dia %hd de %3s de %hd . Correto?\n", day, month, year);
    return 0;
}
