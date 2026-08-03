#include <stdio.h>
int main() {
    int n, sum;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while (n >= 10) {
        sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    printf("Digital Root = %d\n", n);
    return 0;
}
