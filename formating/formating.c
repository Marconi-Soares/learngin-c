#include <stdio.h>

int main(void)
{
    const float PI = 3.1415;
    printf("Pi is equals %.4f\n", PI);

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%8.2f\n", item1);
    printf("Item 2: $%8.2f\n", item2);
    printf("Item 3: $%8.2f\n", item3);


    return 0;
}
