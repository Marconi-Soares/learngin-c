#include <stdio.h>

int main(void)
{
    float non_precise = 0.112233445566778899;
    double precise = 0.112233445566778899;

    unsigned short int un_short_int = 65535;
    short int short_int = 32768;

    printf("Not precise number: %0.15f\n", non_precise);
    printf("Precise number: %0.15lf\n", precise);
    printf("Unsigned short int max number: %d\n", un_short_int);
    printf("Short int overflow number: %d\n", short_int);

    return 0;
}
