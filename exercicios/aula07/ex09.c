// Faça um programa que leia um número inteiro qualquer e mostre
// na tela sua tabuada.

#include <stdio.h>


int main(void)
{
    long long number;   printf("Digite um número inteiro: ");
    scanf("%lld", &number);

    long long number2 = number * 2;
    long long number3 = number * 3;
    long long number4 = number * 4;
    long long number5 = number * 5;
    long long number6 = number * 6;
    long long number7 = number * 7;
    long long number8 = number * 8;
    long long number9 = number * 9;
    long long number10 = number * 10;

    printf("%lld X  1 = %lld\n", number, number);
    printf("%lld X  2 = %lld\n", number, number2);
    printf("%lld X  3 = %lld\n", number, number3);
    printf("%lld X  4 = %lld\n", number, number4);
    printf("%lld X  5 = %lld\n", number, number5);
    printf("%lld X  6 = %lld\n", number, number6);
    printf("%lld X  7 = %lld\n", number, number7);
    printf("%lld X  8 = %lld\n", number, number8);
    printf("%lld X  9 = %lld\n", number, number9);
    printf("%lld X 10 = %lld\n", number, number10);   
    return 0;
}
