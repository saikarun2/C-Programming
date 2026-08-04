#include <stdio.h>
int main() {
    printf("Prime numbers between 1 and 100 are:\n");
    for (int num = 2; num <= 100; num++) {
        int is_prime = 1; 
        int i = 2;
        while (i <= num / 2) {
            if (num % i == 0) {
                is_prime = 0; 
                break;        
            }
            i++;
        }
        if (is_prime == 1) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}
