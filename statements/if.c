#include <stdio.h>

int main(void){
    short age;
    printf("Enter your age: ");
    scanf("%hd", &age);
    
    if (age <= 0){
        printf("Wtf bruh, you don't even exist yet!\n");
    }
    else if (age >= 18){
        printf("You're older\n");
    }
    else {
        printf("You're younger\n");
    }
}
