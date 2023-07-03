// Faça um algoritmo que leia o preço de um produto
// e mostre seu novo preço, com 15% de desconto.

#include <stdio.h>

int main(void) {
    float preco;
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    float novoPreco = preco * (1 - .05);
    printf("O novo preço é R$%.2f\n", novoPreco);

    return 0;
}
