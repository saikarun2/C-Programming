#include <stdio.h>
void findMinMax(int *arr, int n, int *min, int *max)
{
    int i;
    *min = *arr;
    *max = *arr;
    for (i = 1; i < n; i++)
    {
        if (*(arr + i) < *min)
            *min = *(arr + i);
        if (*(arr + i) > *max)
            *max = *(arr + i);
    }
}
int main()
{
    int arr[] = {25, 10, 45, 5, 30};
    int n = 5;
    int min, max;
    findMinMax(arr, n, &min, &max);
    printf("Minimum  = %d\n", min);
    printf("Maximum  = %d\n", max);
    return 0;
}
