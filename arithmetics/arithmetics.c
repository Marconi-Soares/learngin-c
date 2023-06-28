#include <stdio.h>

int main(void)
{
    short x = 10;
    short y = 15;
    short res = x + y;
    printf("The sum of %d and %d is %d\n", x, y, res);
    
    x = 5;
    y = 2;
    float res2 = x / (float) y;
    printf("%d divided by %d is %.1f\n", x, y, res2);

    return 0;

}
