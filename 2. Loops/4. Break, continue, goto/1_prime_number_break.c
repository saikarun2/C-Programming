#include <stdio.h>
int main() {
    int num, i, isPrime;
    for (num = 101; ; num++) {
        isPrime = 1;
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("First prime number greater than 100 is: %d\n", num);
            break;
        }
    }
    return 0;
}