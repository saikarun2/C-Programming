#include <stdio.h>
int main() {
    int r, c;
    printf("enter the no of rows and coloums: ");
    scanf("%d %d", &r, &c);
    int A[r][c], B[r][c];
    printf("enter the values in A matrix: ");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("enter the values in B matrix: ");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            A[i][j] += B[i][j];
        }
    }
    printf("sum of the bot matrix\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}