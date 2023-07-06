#include <stdio.h>
#include <string.h>

struct Player {
    char name[12];
    int score;
};

void printPlayer(struct Player player) {
    printf("O(A) jogador(a) %s marcou %d ponto(s)\n", player.name, player.score);
}

int main(void){
    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Marconi");
    strcpy(player2.name, "Maria");
    
    player1.score = 10;
    player2.score = 2;
    
    printPlayer(player1);
    printPlayer(player2);
    
    return 0;
}
