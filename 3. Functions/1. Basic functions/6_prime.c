#include <stdio.h>
void checkPrime(int n) {
    int i, flag = 0;
    if (n <= 1) {
        flag = 1;
    }
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("The given number is prime");
    else
        printf("The given number is not prime");
}
int main() {
    int n = 7;
    checkPrime(n);
    return 0;
}
