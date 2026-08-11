#include <stdio.h>
void sumAndProduct(int *arr, int n, int *sum, int *product)
{
    int i;
    *sum = 0;
    *product = 1;
    for (i = 0; i < n; i++)
    {
        *sum += *(arr + i);
        *product *= *(arr + i);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int sum, product;
    sumAndProduct(arr, n, &sum, &product);
    printf("%d %d",sum, product);
    return 0;
}