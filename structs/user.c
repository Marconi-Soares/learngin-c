#include <stdio.h>

typedef struct {
    char name[25];
    char password[64];
    int id;
} User;

int main(void){
    User user = {"marconi", "123", 1};
    printf("username: %s\n", user.name);
    printf("id: %d\n", user.id);

    return 0;
}
