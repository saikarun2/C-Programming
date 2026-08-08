#include <stdio.h>
#include <string.h>
int main() {
    char username[20], password[20];
    int attempts = 0;
    int success = 0;
    do {
        printf("\nEnter username: ");
        scanf("%19s", username);
        printf("Enter password: ");
        scanf("%19s", password);
        if (strcmp(username, "admin") == 0 &&
            strcmp(password, "1234") == 0) {
            printf("Login successful!\n");
            success = 1;
        } else {
            attempts++;
            printf("Invalid username or password.\n");
            printf("Attempts remaining: %d\n", 3 - attempts);
        }
    } while (attempts < 3 && success == 0);
    if (!success) {
        printf("Login failed. Maximum attempts reached.\n");
    }
    return 0;
}