#include <stdio.h>
void reverseArray(int *arr, int n)
{
    int *start = arr;
    int *end = arr + n - 1;
    int temp;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    reverseArray(arr, n);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}