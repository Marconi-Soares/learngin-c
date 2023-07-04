#include <stdio.h>

int main(void){
    char tempType;
    printf("Digite o tipo de temperatura que deseja converter [ F | C ]: ");
    scanf("%c", &tempType);

    if (tempType == 'C' || tempType == 'c') {
        float temp;
        printf("Digite a temperatura em graus celsius: ");
        scanf("%f", &temp);
        
        float convertedTemp = (temp *  9 / 5) + 32;
        printf("%.1f°C é igual a %.1f°F\n", temp, convertedTemp);
    }

    else if (tempType == 'F' || tempType == 'f') { 
        float temp;
        printf("Digite a temperatura em graus farenheit: ");
        scanf("%f", &temp);

        float convertedTemp = ((temp - 32) * 5) / 9;
        printf("%.1f°F é igual a %.1f°C\n", temp, convertedTemp);
    }

    else {
        printf("Digite um valor válido!\n");
    }

    return 0;
}
