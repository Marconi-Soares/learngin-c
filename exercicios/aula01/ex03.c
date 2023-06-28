// Crie um script Python que leia dois números e tenta mostrar a soma entre eles.
#include <stdio.h>

int main(void)
{
    float n1, n2, res;

    printf("Digite um número: ");
    scanf("%f", &n1);

    printf("Digite outro número: ");
    scanf("%f", &n2);

    res = n1 + n2;

    printf("A soma entre %.2f e %.2f é %.2f\n", n1, n2, res);
    return 0;
}
