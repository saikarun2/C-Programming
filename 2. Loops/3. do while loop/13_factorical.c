#include <stdio.h>
int main() {
    int n, i = 1;
    long long factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        do {
            factorial = factorial * i;
            i++;
        } while (i <= n);
        printf("Factorial of %d = %lld\n", n, factorial);
    }
    return 0;
}