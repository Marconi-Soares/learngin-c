#include <stdio.h>

int main(void){
    short nota;
    printf("Digite sua nota: ");
    scanf("%hd", &nota);


    switch (nota) {
        case 10:
            printf("Você fechou a prova, parabêns!\n");
            break;
        
        default:
            printf("Você é um fracassado kkkkkk\n");
            break;
    }

    return 0;
}
