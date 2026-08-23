#include<stdio.h>
int main()
{
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
    printf("Primary diagonal elements are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i][i]);
    }
    return 0;
}