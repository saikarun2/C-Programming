#include <stdio.h>
int main() {
    int rows, i, j, k, num;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++) {
        num = 1;
        for (j = 0; j < rows - i - 1; j++) {
            printf("  ");
        }
        for (k = 0; k <= i; k++) {
            printf("%4d", num);
            num = num * (i - k) / (k + 1);
        }
        printf("\n");
    }
    return 0;
}