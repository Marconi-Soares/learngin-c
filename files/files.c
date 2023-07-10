#include <stdio.h>

int main(void){
    
    if (remove("test.txt") == 0) {
        printf("File removed successfuly\n");
    }
    else {
        printf("File not found\n");
        printf("creating new file...\n");
        FILE *pF = fopen("test.txt", "w");
        fprintf(pF, "Hello world!");
        printf("Done!\n");
    }
}
