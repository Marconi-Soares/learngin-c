#include <stdio.h>

int main(void){ 
    float prices[] = {5.00, 10.00, 15.50, 25.30, 50.99};
    int pricesLen = sizeof( prices ) / sizeof( prices[0] );

    for (int i = 0; i < pricesLen; i++) {
        printf("$%.2f\n", prices[i]);
    }
    return 0;
}
