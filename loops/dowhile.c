#include <stdio.h>

int main(void){
    long long sum = 0;
    long long number = 0;

    do {
        printf("Digite um número maior que 0 para somá-lo: ");
        scanf("%lld", &number);

        if (number > 0) {sum += number;}

    } while (number > 0);

    printf("A soma é %lld\n", sum);
} 
