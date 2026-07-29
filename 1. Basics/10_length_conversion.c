#include <stdio.h>
int main() {
    int choice;
    float val, res;
    printf("Unit Converter Menu:\n");
    printf("1. Kilometers to Miles\n");
    printf("2. Miles to Kilometers\n");
    printf("3. Kilograms to Pounds\n");
    printf("4. Pounds to Kilograms\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter value in kilometers: ");
            scanf("%f", &val);
            res = val * 0.621371;
            printf("%.2f km = %.2f miles\n", val, res);
            break;
        case 2:
            printf("Enter value in miles: ");
            scanf("%f", &val);
            res = val / 0.621371;
            printf("%.2f miles = %.2f km\n", val, res);
            break;
        case 3:
            printf("Enter value in kilograms: ");
            scanf("%f", &val);
            res = val * 2.20462;
            printf("%.2f kg = %.2f lbs\n", val, res);
            break;
        case 4:
            printf("Enter value in pounds: ");
            scanf("%f", &val);
            res = val / 2.20462;
            printf("%.2f lbs = %.2f kg\n", val, res);
            break;
        default:
            printf("Invalid choice! Please select between 1 and 4.\n");
    }
    return 0;
}
