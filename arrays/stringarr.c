#include <stdio.h>
#include <string.h>


int main(void){
    char langs[][10] = {"Java", "Python", "GO", "JavaScript"};
    int langsLen = sizeof(langs) / sizeof(langs[0]);
    
    strcpy(langs[0], "Rust");

    for (int i = 0; i < langsLen; i++){
        printf("%s\n", langs[i]);
    }
}
