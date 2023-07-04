#include <stdio.h>

void sortNumbers(int numbers[], int size) {
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){

            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }

}

void printNumbers(int numbers[], int size) {
    for (int i = 0; i < size; i++){

        if (i == size - 1) {
            printf("%d", numbers[i]);
        }
        else {
            printf("%d, ", numbers[i]);
        }
    }
    printf("\n");
}

int main(void){
    int numbers[] = {9, 1, 3, 2, 5, 7, 8, 4};
    int numbersLen = sizeof( numbers ) / sizeof( numbers[0] );

    sortNumbers(numbers, numbersLen);
    printNumbers(numbers, numbersLen);
}
