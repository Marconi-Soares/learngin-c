// Desenvolva um programa que leia duas notas de uma aluno,
// calcule e mostre sua nota.

#include <stdio.h>
#include <math.h>

int main(void)
{
    float nota1, nota2;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a outra nota: ");
    scanf("%f", &nota2);

    float media = (nota1 + nota2) /  2;
    printf("A sua média é %.2f\n", media);
    return 0;
}
