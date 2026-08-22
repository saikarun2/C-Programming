#include <stdio.h>
int main() {
    int n, symmetric = 1;
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
            if (A[i][j] != A[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric){
            break;
        }
    }
    if (symmetric){
        printf("The matrix is symmetric.\n");
    }
    else{
        printf("The matrix is not symmetric.\n");
    }
    return 0;
}
