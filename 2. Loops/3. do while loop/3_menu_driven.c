#include <stdio.h>
int main() {
    int choice;
    do {
        printf("\n--- MENU ---\n");
        printf("1. Say Hello\n");
        printf("2. Display Welcome Message\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Hello!\n");
                break;
            case 2:
                printf("Welcome to the C program!\n");
                break;
            case 3:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);
    return 0;
}