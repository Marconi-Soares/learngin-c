// Faça um programa que leia a largura e a altura de uma parede
// em metros, calcule a sua área e a quantidade de tinta necessária
// para pintá-la, sabendo que cada litro de tinta, pinta uma área de 2m².

#include <stdio.h>

int main(void) {
    float altura;
    printf("Digite o altura da parede em metros: ");
    scanf("%f", &altura);

    float largura;
    printf("Digite o largura da parede em metros: ");
    scanf("%f", &largura);
    
    int RENDIMENTO = 2;
    float area = altura * largura;
    float latas =  area / RENDIMENTO;
    
    printf("Para pintar %.2f metros², você precisará de %.1f latas de tinta.\n", area, latas);

    return 0;
}
