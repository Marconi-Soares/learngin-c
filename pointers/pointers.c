#include <stdio.h>

void printAge(unsigned short *age){
    printf("You're %d years old.\n", *age);
}

int main(void){
    unsigned short age = 19;
    unsigned short *pAge = &age;

    // printf("address of age: %p\n", &age);
    // printf("value of age  : %d\n", age);
    // printf("size of age   : %ld\n", sizeof(age));

    // printf("address of pAge: %p\n", pAge);
    // printf("value of pAge  : %d\n", *pAge);
    // printf("size of age    : %ld\n", sizeof(pAge));

    printAge(pAge);
}
