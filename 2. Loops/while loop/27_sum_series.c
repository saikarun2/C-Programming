#include <stdio.h>
int main() {
    double term = 1.0, sum = 0.0;
    while (term >= 1e-6) {
        sum += term;
        term /= 2.0;
    }
    printf("Sum of the series = %.6f\n", sum);
    return 0;
}
