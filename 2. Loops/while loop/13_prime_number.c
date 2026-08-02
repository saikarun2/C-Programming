#include <stdio.h>
int main() {
    int num;
    int i = 2;
    int is_prime = 1; 
    printf("Enter a positive Number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    if (num <= 1) {
        is_prime = 0;
    }
    while (is_prime && (i <= num / 2)) {
        if (num % i == 0) {
            is_prime = 0;
        }
        i++;
    }
    if (is_prime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}
