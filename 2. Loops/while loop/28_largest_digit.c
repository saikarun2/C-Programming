#include <stdio.h>
int main() {
    int n, digit, largest = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while (n > 0) {
        digit = n % 10;
        if (digit > largest){
            largest = digit;
        }
        n /= 10;
    }
    printf("Largest digit = %d\n", largest);
    return 0;
}
