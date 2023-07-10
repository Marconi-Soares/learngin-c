#include <stdio.h>

int main(void){
    char a = 'X';
    char b = 'Y';
    char c = 'Z';
    
    printf("X = %ld bytes\n", sizeof(a));
    printf("Y = %ld bytes\n", sizeof(b));
    printf("Z = %ld bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
}
