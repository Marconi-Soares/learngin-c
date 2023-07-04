#include <stdio.h>

int main(void){
    for (int i = 0; i <= 100; i++) {
        if (i == 13) { continue; }
        
        printf("%d\n", i);

        if (i == 20) { break; }
    }

    return 0;
}
