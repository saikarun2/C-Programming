#include <stdio.h>
int main() {
    float bmr;
    int activity;
    printf("Enter your BMR value: ");
    scanf("%f", &bmr);
    printf("\nActivity Level:\n");
    printf("1. Sedentary\n");
    printf("2. Lightly Active\n");
    printf("3. Moderately Active\n");
    printf("4. Very Active\n");
    printf("5. Extra Active\n");
    printf("Enter your activity level (1-5): ");
    scanf("%d", &activity);
    if (activity == 1) {
        printf("Classification: Sedentary\n");
        printf("Daily Calories Needed: %.2f\n", bmr * 1.2);
    }
    else if (activity == 2) {
        printf("Classification: Lightly Active\n");
        printf("Daily Calories Needed: %.2f\n", bmr * 1.375);
    }
    else if (activity == 3) {
        printf("Classification: Moderately Active\n");
        printf("Daily Calories Needed: %.2f\n", bmr * 1.55);
    }
    else if (activity == 4) {
        printf("Classification: Very Active\n");
        printf("Daily Calories Needed: %.2f\n", bmr * 1.725);
    }
    else if (activity == 5) {
        printf("Classification: Extra Active\n");
        printf("Daily Calories Needed: %.2f\n", bmr * 1.9);
    }
    else {
        printf("Invalid activity level. Enter a value between 1 and 5.\n");
    }
    return 0;
}