#include <stdio.h>
int main() {
    int num, i, isPrime;
    for (num = 2; num <= 100; num++) {
        isPrime = 1;
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", num);
        }
    }
    return 0;
}