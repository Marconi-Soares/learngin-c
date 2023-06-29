// Escreva um programa que leia um valor em metros e o exiba
// convertido em centímetros e milimetros.

#include <stdio.h>
#include <math.h>


int main(void)
{
    float metros;

    printf("Digite um valor em metros: ");
    scanf("%f", &metros);

    int centimetros = metros * 100;
    int milimetros = metros * 1000;

    printf("O valor digitado foi %.2f\n", metros);
    printf("O valor em centimetros é %d\n", centimetros);
    printf("O valor em milimetros é %d\n", milimetros);
    return 0;
}
