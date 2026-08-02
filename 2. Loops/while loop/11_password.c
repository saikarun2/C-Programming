#include <stdio.h>
#include <string.h>
int main() {
    const char CORRECT_PASSWORD[] = "Github@123";
    char user_input[50];
    while (1) {
        printf("Enter the password: ");
        if (scanf("%49s", user_input) != 1) {
            printf("Error reading input.\n");
            return 1;
        }
        if (strcmp(user_input, CORRECT_PASSWORD) == 0) {
            printf("Access Granted!\n");
            break;
        } else {
            printf("Incorrect password. Please try again.\n");
        }
    }
    return 0;
}
