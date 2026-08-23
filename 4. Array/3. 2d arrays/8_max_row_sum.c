#include<stdio.h>
int main()
{
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int maxSum =0;
    for (int j = 0; j < cols; j++)
    {
        maxSum += matrix[0][j];
    }
    for (int i = 1; i < rows; i++)
    {
        int rowSum =0;
        for (int j = 0; j < cols; j++)
        {
            rowSum = rowSum + matrix[i][j];
        }
        if(rowSum > maxSum){
            maxSum = rowSum;
        }
    }
    printf("The max sum of the rows is %d ", maxSum);
    return 0;
}