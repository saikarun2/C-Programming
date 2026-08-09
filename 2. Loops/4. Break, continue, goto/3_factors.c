#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factors of %d are: ", n);
    for (i = 1; i <= n; i++) {
        if (i > n / i) {
            break;
        }
        if (n % i == 0) {
            printf("%d ", i);

            if (i != n / i) {
                printf("%d ", n / i);
            }
        }
    }
    return 0;
}