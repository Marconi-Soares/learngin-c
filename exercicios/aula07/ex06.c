// Crie um algoritmo que leia um número e mostre o seu dobro, seu triple e sua 
// raiz quadrada.
#include <stdio.h>
#include <math.h>


int main(void)
{
    double number;
    printf("Digite um número: ");
    scanf("%lf", &number);

    double number_double = number * 2;
    double number_triple = number * 3;
    double number_sqrt = sqrtf(number);

    printf("O número que você digitou é %.2f\n", number);
    printf("O dobro desse número é %.2f\n", number_double);
    printf("O triplo desse número é %.2f\n", number_triple);
    printf("A raiz quadrada desse número é %.2f\n", number_sqrt);

    return 0;
}
