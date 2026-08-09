#include <stdio.h>
int main() {
    int a = 0, b = 1, c;
    printf("Fibonacci terms: ");
    while (1) {
        if (a > 100) {
            break;
        }
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}