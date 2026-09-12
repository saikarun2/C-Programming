#include <stdio.h>
int main()
{
    int matrix[3][3];
    int (*p)[3] = matrix;
    int i, j;
    printf("Enter 9 elements:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", *(p + i) + j);
        }
    }
    printf("Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++){
            printf("%d ", *(*(p + i) + j));
        }
        printf("\n");
    }
    return 0;
}
