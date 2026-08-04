#include <stdio.h>
int main() {
    double base;
    int exponent;
    double result = 1.0;
    int count = 0;
    int positive_exponent;
    printf("Enter base number: ");
    if (scanf("%lf", &base) != 1) {
        printf("Invalid base input.\n");
        return 1;
    }
    printf("Enter integer exponent: ");
    if (scanf("%d", &exponent) != 1) {
        printf("Invalid exponent input.\n");
        return 1;
    }
    positive_exponent = (exponent < 0) ? -exponent : exponent;
    while (count < positive_exponent) {
        result *= base;
        count++;
    }
    if (exponent < 0) {
        if (result == 0) {
            printf("Error: Division by zero.\n");
            return 1;
        }
        result = 1.0 / result;
    }
    printf("%.2lf raised to the power of %d is: %.2lf\n", base, exponent, result);
    return 0;
}
