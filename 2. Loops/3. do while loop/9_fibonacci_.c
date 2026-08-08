#include <stdio.h>
int main() {
    int n, i = 1;
    int a = 0, b = 1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }
    printf("Fibonacci series: ");
    do {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
        i++;
    } while (i <= n);
    return 0;
}