#include <stdio.h>


int main(void){
    char preenchimento;
    printf("Digite uma letra ou simbolo para preencher a matriz: ");
    scanf("%c", &preenchimento);

    int colunas;
    printf("Digite um número de colunas: ");
    scanf("%d", &colunas);

    int linhas;
    printf("Digite um número de linhas: ");
    scanf("%d", &linhas);


    for (int i = 1; i <= linhas; i++) {
        for (int j = 1; j <= colunas; j++) {
            printf("%c", preenchimento);
        }
        printf("\n");
    }

    return 0;
}
