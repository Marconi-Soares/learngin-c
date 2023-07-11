#include <stdio.h>

void test(int* number){
    *number = 42;
}

int main(void){
    int number = 0;
    int* pNumber = &number;
    
    printf("%d\n", number);
    test(pNumber);
    printf("%d\n", number);

    return 0;
}
