#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[25];
    short int age;

    printf("What is your name: ");
    fgets(name, 25, stdin);

    printf("Enter your age: ");
    scanf("%hd", &age);
    
    name[strlen(name)-1] = '\0'; // Replace the last char with an null char.

    printf("Your name is %s.\n", name);
    printf("You are %hd years old.\n", age);
    return 0;
}
