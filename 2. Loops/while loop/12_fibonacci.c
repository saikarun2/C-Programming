#include <stdio.h>
int main() {
    int n;
    long long first = 0, second = 1, next;
    int count = 0;
    printf("Enter the number of Fibonacci terms to generate: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }
    printf("Fibonacci Sequence (first %d terms):\n", n);
    while (count < n) {
        if (count == 0) {
            printf("%lld ", first);
        } else if (count == 1) {
            printf("%lld ", second);
        } else {
            next = first + second;
            first = second;
            second = next;
            printf("%lld ", next);
        }
        count++;
    }
    printf("\n");
    return 0;
}
