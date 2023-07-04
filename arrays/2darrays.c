#include <stdio.h>

int main(void){
    int table[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    int rowLen = sizeof( table ) / sizeof( table[0] );
    int columnLen = sizeof( table[0] ) / sizeof( table[0][0] );

    for (int row = 0; row < rowLen; row++){
        for (int column = 0; column < columnLen; column++) {
            printf("%d ", table[row][column]);
        }
        printf("\n");
    }
    
    return 0;
}
