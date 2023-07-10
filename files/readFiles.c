#include <stdio.h>


int main(void){
    FILE *pF = fopen("testread.txt", "r");
    char buffer[255];
    
    if (pF == NULL) {
        printf("File not found");
    }
    else {
        while (fgets(buffer, 255, pF) != NULL) {
            printf("%s", buffer);
        }
    }
    fclose(pF);

    return 0;
}
