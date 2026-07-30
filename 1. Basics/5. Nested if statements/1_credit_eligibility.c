#include <stdio.h>
int main() {
    int age;
    float income;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your monthly income: ");
    scanf("%f", &income);
    if (age >= 18) {
        if (income >= 25000) {
            printf("Congratulations! You are eligible for a credit card.\n");
        } else {
            printf("Sorry! You are not eligible because your income is too low.\n");
        }
    } else {
        printf("Sorry! You are not eligible because you are under 18.\n");
    }
    return 0;
}