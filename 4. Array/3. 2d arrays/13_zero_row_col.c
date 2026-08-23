#include <stdio.h>
int main()
{
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int firstRowZero = 0;
    int firstColZero = 0;
    for (int j = 0; j < cols; j++)
    {
        if (matrix[0][j] == 0)
        {
            firstRowZero = 1;
            break;
        }
    }
    for (int i = 0; i < rows; i++)
    {
        if (matrix[i][0] == 0)
        {
            firstColZero = 1;
            break;
        }
    }
    for (int i = 1; i < rows; i++)
    {
        for (int j = 1; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    for (int i = 1; i < rows; i++)
    {
        if (matrix[i][0] == 0)
        {
            for (int j = 1; j < cols; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }
    for (int j = 1; j < cols; j++)
    {
        if (matrix[0][j] == 0)
        {
            for (int i = 1; i < rows; i++)
            {
                matrix[i][j] = 0;
            }
        }
    }
    if (firstRowZero)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[0][j] = 0;
        }
    }
    if (firstColZero)
    {
        for (int i = 0; i < rows; i++)
        {
            matrix[i][0] = 0;
        }
    }
    printf("Matrix after setting rows and columns to 0:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}