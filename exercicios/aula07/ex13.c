// Faça um algoritmo que leia o salário de um funcionário e mostre
// seu novo salário, com 15% de aumento.

#include <stdio.h>

int main(void) {
    float salario;
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    float novoSalario = salario * (1 + .15);
    
    printf("O salário após o aumento é será de $%.2f\n", novoSalario);
    return 0;
}
