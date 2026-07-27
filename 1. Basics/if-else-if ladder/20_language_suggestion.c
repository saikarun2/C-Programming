#include <stdio.h>
int main() {
    int choice;
    printf("Programming Language Recommendation System\n");
    printf("----------------------------------------\n");
    printf("Select your purpose:\n");
    printf("1. Web Development\n");
    printf("2. Mobile App Development\n");
    printf("3. Data Science / AI\n");
    printf("4. System Programming\n");
    printf("5. Game Development\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Recommended Language: JavaScript\n");
    } else if (choice == 2) {
        printf("Recommended Language: Kotlin (Android) or Swift (iOS)\n");
    } else if (choice == 3) {
        printf("Recommended Language: Python\n");
    } else if (choice == 4) {
        printf("Recommended Language: C\n");
    } else if (choice == 5) {
        printf("Recommended Language: C++\n");
    } else {
        printf("Invalid choice! Please enter a number between 1 and 5.\n");
    }
    return 0;
}