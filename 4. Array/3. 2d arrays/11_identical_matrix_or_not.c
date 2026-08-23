#include <stdio.h>
int main()
{
    int rows, cols;
    int identical = 1;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix1[rows][cols];
    int matrix2[rows][cols];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix1[i][j] != matrix2[i][j])
            {
                identical = 0;
                break;
            }
        }
        if (!identical)
        {
            break;
        }
    }
    if (identical){
        printf("The matrices are identical.\n");
    }
    else{
        printf("The matrices are not identical.\n");
    }
    return 0;
}
