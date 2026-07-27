#include <stdio.h>
int main() {
    int choice;
    float balance = 1000.0, amount;
    while (1) {
        printf("\n===== BANK MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Your current balance is: %.2f\n", balance);
        }
        else if (choice == 2) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            if (amount > 0) {
                balance = balance + amount;
                printf("Amount deposited successfully.\n");
                printf("Updated balance: %.2f\n", balance);
            }
            else {
                printf("Invalid deposit amount.\n");
            }
        }
        else if (choice == 3) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > 0 && amount <= balance) {
                balance = balance - amount;
                printf("Amount withdrawn successfully.\n");
                printf("Remaining balance: %.2f\n", balance);
            }
            else {
                printf("Insufficient balance or invalid amount.\n");
            }
        }
        else if (choice == 4) {
            printf("Thank you for using our bank system.\n");
            break;
        }
        else {
            printf("Invalid choice! Please select a valid option.\n");
        }
    }
    return 0;
}