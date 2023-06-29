// Crie um programa que leia quanto dinheiro uma pessoa tem na carteira
// e mostre quantos dolares ela pode comprar. Considre U$1.00 = R$3.27

#include <stdio.h>

int main(void)
{
    float total; 
    printf("Digite quantos reais você possui: ");
    scanf("%f", &total);
    
    const float DOLAR_COTACAO = 3.27;
    float totalDolar = total / DOLAR_COTACAO;

    printf("Você possui R$%.2f, isso é U$%.2f\n", total, totalDolar);
    return 0;
}
