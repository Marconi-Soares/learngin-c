// Faça um programa que leia um número Inteiro e mostre na tela o seu
// antecessor e seu sucessor.
#include <stdio.h>


int main(void)
{
    long long number;

    printf("Digite um número: ");
    scanf("%lld", &number);
    
    long long predecessor = number - 1;
    long long successor = number + 1;
    
    printf("O número que você digitou é %lld.\n", number);
    printf("O seu antecessor é %lld, ", predecessor);
    printf("e o seu sucessor é %lld.\n", successor);
    
    return 0;
}
