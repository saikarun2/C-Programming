#include <stdio.h>
#include <string.h>
int main() {
    char username[20], password[20];
    int i;
    for (i = 1; i <= 3; i++) {
        printf("\nAttempt %d of 3\n", i);
        printf("Enter username: ");
        scanf("%19s", username);
        printf("Enter password: ");
        scanf("%19s", password);
        if (strcmp(username, "admin") == 0 &&
            strcmp(password, "1234") == 0) {
            printf("Login successful!\n");
            break;
        } else {
            printf("Invalid username or password.\n");
        }
    }
    if (i > 3) {
        printf("Login failed. Maximum attempts reached.\n");
    }
    return 0;
}