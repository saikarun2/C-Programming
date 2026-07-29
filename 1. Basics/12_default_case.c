#include <stdio.h>
int main() {
    int choice;
    printf("Enter a number (1-3) to select a prize: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("You won a brand new Bicycle!\n");
            break;
        case 2:
            printf("You won a Laptop!\n");
            break;
        case 3:
            printf("You won a Smartphone!\n");
            break;
        default:
            // This block executes if choice is not 1, 2, or 3
            printf("Invalid selection! Please enter a number between 1 and 3.\n");
            break;
    }
    return 0;
}
