#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{
    int n, m;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements in first array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter number of elements in second array: ");
    scanf("%d", &m);
    int b[m];
    printf("Enter array elements in second array: ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    qsort(a, n, sizeof(int), compare);
    qsort(b, m, sizeof(int), compare);
    int i = 0, j = 0;
    printf("Union: ");
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            printf("%d ", a[i]);
            int value = a[i];
            while (i < n && a[i] == value){
                i++;
            }
        }
        else if (a[i] > b[j])
        {
            printf("%d ", b[j]);
            int value = b[j];
            while (j < m && b[j] == value){
                j++;
            }
        }
        else
        {
            printf("%d ", a[i]);
            int value = a[i];
            while (i < n && a[i] == value){
                i++;
            }
            while (j < m && b[j] == value){
                j++;
            }
        }
    }
    while (i < n)
    {
        int value = a[i];
        printf("%d ", value);
        while (i < n && a[i] == value){
            i++;
        }
    }
    while (j < m)
    {
        int value = b[j];
        printf("%d ", value);
        while (j < m && b[j] == value){
            j++;
        }
    }
    return 0;
}