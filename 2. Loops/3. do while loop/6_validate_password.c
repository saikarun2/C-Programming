#include <stdio.h>
#include <string.h>
int main() {
    char password[100];
    do {
        printf("Enter password (minimum 8 characters): ");
        scanf("%99s", password);
        if (strlen(password) < 8) {
            printf("Password is too short. Try again.\n");
        }
    } while (strlen(password) < 8);
    printf("Password accepted!\n");
    return 0;
}