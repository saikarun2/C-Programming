#include <stdio.h>
void display(int (*arr)[3], int rows)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
}
int main()
{
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    printf("2D Array:\n");
    display(arr, 2);
    return 0;
}