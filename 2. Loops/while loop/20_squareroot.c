#include <stdio.h>
#include <math.h> 
int main() {
    double number;
    double guess;
    double next_guess;
    const double TOLERANCE = 1e-7; 
    printf("Enter a positive number to find its square root: ");
    if (scanf("%lf", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    if (number < 0) {
        printf("Error: Cannot calculate the square root of a negative number.\n");
        return 1;
    }
    if (number == 0) {
        printf("The square root of 0 is: 0.00\n");
        return 0;
    }
    guess = number / 2.0;
    while (1) {
        next_guess = 0.5 * (guess + (number / guess));
        if (fabs(next_guess - guess) < TOLERANCE) {
            break; // Solution found, exit the loop
        }
        guess = next_guess;
    }
    printf("The square root of %.2lf is approximately: %.2lf\n", number, next_guess);
    return 0;
}