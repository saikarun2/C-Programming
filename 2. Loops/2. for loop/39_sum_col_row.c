#include <stdio.h>
int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int i, j;
    int sum;
    printf("Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Sum of each row:\n");
    for (i = 0; i < 3; i++) {
        sum = 0;
        for (j = 0; j < 3; j++) {
            sum += matrix[i][j];
        }
        printf("Row %d = %d\n", i + 1, sum);
    }
    printf("Sum of each column:\n");
    for (j = 0; j < 3; j++) {
        sum = 0;
        for (i = 0; i < 3; i++) {
            sum += matrix[i][j];
        }
        printf("Column %d = %d\n", j + 1, sum);
    }
    return 0;
}
