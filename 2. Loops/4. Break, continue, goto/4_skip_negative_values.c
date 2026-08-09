#include <stdio.h>
int main() {
    int n, i, num, count = 0;
    float sum = 0, average;
    printf("Enter the number of values: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &num);
        if (num < 0) {
            continue;
        }
        sum += num;
        count++;
    }
    if (count > 0) {
        average = sum / count;
        printf("Average of non-negative numbers = %.2f\n", average);
    } else {
        printf("No non-negative numbers entered.\n");
    }
    return 0;
}