#include <stdio.h>
int ascending(int a, int b)
{
    return a > b;
}
int descending(int a, int b)
{
    return a < b;
}
void sort(int arr[], int n, int (*compare)(int, int))
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (compare(arr[j], arr[j + 1]))
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {5, 2, 8, 1, 3};
    int n = 5;
    int i;
    printf("Original array: ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    sort(arr, n, ascending);
    printf("\nAscending order: ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    sort(arr, n, descending);
    printf("\nDescending order: ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}