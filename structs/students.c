#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[255];
    float notas[4];
} Estudante;

float calculaNotaFinal(float notas[4]) {
    float notaFinal = 0;

    for (int i = 0; i < 4; i++) {
        notaFinal += notas[i];
    }
    return notaFinal;
}

void mostraStatusDoAluno(Estudante estudantes[], int len) {
    for (int i = 0; i < len; i++) {
        float notaFinal = calculaNotaFinal(estudantes[i].notas);

        char strStatus[10];
        
        if (notaFinal >= 60) {
            strcpy(strStatus, "Aprovado");
        }
        else {
            strcpy(strStatus, "Reprovado");
        }
        
        printf("Nome: \t\t %s\n", (estudantes[i].nome));
        printf("Nota final: %10.2f\n", notaFinal);
        printf("Status: \t %s\n", strStatus);
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    }
}

int main(void){

    Estudante marconi = {"Marconi S. de Jesus", {25, 24, 20, 25}};
    Estudante larissa = {"Larissa Raiane B. Rosa", {15, 15, 23, 22}};
    Estudante marcos  = {"Marconi Henrique B.", {15, 10, 10, 20}};

    Estudante estudantes[] = {marconi, larissa, marcos};
    int estudantesLen = sizeof( estudantes ) / sizeof( estudantes[0] );

    mostraStatusDoAluno(estudantes, estudantesLen);

}
