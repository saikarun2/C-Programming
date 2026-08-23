#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nUpper Triangle:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i <= j){
                printf("%d ", matrix[i][j]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    printf("\nLower Triangle:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= j){
                printf("%d ", matrix[i][j]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}