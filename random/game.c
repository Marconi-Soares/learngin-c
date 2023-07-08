#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    const int MIN = 1;
    const int MAX = 100;

    int guess, answer;
    int guesses = 0;

    srand(time(0));

    answer = (rand() % MAX) + MIN;

    do {
        printf("Enter a number: ");
        scanf("%d", &guess);

        if (guess > answer)
        {
            printf("Too hight...\n");
                guesses++;
        }
        else
        {
            printf("Too low...\n");
            guesses++;
        }
    } while (guess != answer);
    printf("Congrats, you won!\n");
    printf("Attempts: %d\n", guesses);
    return 0;

}
