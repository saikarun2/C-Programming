#include <stdio.h>
int main() {
    int n;
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);
    int A[n][n];
    printf("Enter the values of the matrix:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            int temp = A[i][j];
            A[i][j] = A[i][n - 1 - j];
            A[i][n - 1 - j] = temp;
        }
    }
    printf("Matrix after 90 degree clockwise rotation:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
