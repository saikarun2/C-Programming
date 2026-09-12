#include <stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int (*ptr)[5];
    ptr = &arr;
    printf("Array elements using pointer to array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", (*ptr)[i]);
    }
    return 0;
}
