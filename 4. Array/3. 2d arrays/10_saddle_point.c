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
    int found = 0;
    for (int i = 0; i < rows; i++)
    {
        int minCol = 0;
        for (int j = 1; j < cols; j++)
        {
            if (matrix[i][j] < matrix[i][minCol])
            {
                minCol = j;
            }
        }
        int isSaddle = 1;
        for (int j = 0; j < rows; j++)
        {
            if (matrix[j][minCol] > matrix[i][minCol])
            {
                isSaddle = 0;
                break;
            }
        }
        if (isSaddle)
        {
            printf("Saddle point = %d\n", matrix[i][minCol]);
            printf("Position = row, column [%d ,%d]\n", i + 1, minCol + 1);
            found = 1;
        }
    }
    if (!found)
    {
        printf("No saddle point found.\n");
    }
    return 0;
}
