#include <stdio.h>
#include <ctype.h>


int main(void)
{
    char questions[][100] = {
        "1. What year did the C language debut:",
        "2. Who is credited with creating C:",
        "3. What is the predecessor of C:"
    };
    
    char options[][100] = {
        "A. 1969", "B. 1972", "C. 1975", "D. 1999",
        "A. Dennis Ritchie", "B. Nikola Tesla", "C. Jhon Carmack", "D. Doc Brown",
        "A. Objective C", "B. B", "C. C++", "D. C#"
    };

    char answers[3] = {'B', 'A', 'B'};

    int numberOfQuestions = sizeof(questions) / 100;
    char guess;
    int score = 0;


    for (int i = 0; i < numberOfQuestions; i++) 
    {
        printf("Quiz Game!\n");
        printf("%s\n", questions[i]);
        for (int j = (4*i); j < (4*i) + 4; j++)
        {
            printf("%s\n", options[j]);
        }
        printf("guess: ");
        scanf("%c", &guess);
        getchar();
        guess = toupper(guess);

        if (guess == answers[i]) {
            printf("Correct!\n");
            score++;
        }
        else {
            printf("Wrong!\n");
        }

    }
    printf("Your final score is: %d\n", score);
}
