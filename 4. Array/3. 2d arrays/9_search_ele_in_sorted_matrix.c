#include <stdio.h>
int main()
{
    int rows, cols, key;
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
    printf("Enter element to search: ");
    scanf("%d", &key);
    int i = 0;
    int j = cols - 1;
    while (i < rows && j >= 0)
    {
        if (matrix[i][j] == key)
        {
            printf("Element found at row, column[%d, %d]\n", i, j);
            return 0;
        }
        else if (matrix[i][j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    printf("Element not found\n");
    return 0;
}
