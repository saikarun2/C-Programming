#include <stdio.h>
int main() {
    int num, sum = 0;
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum += num;
        printf("Current sum = %d\n", sum);
        if (sum > 100) {
            break;
        }
    }
    printf("Sum exceeded 100. Final sum = %d\n", sum);
    return 0;
}