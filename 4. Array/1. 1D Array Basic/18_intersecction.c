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
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter number of elements in second array: ");
    scanf("%d", &m);
    int b[m];
    printf("Enter array elements in first array: ");
    for (int i = 0; i < m; i++){
        scanf("%d", &b[i]);
    }
    qsort(a, n, sizeof(int), compare);
    qsort(b, m, sizeof(int), compare);
    int i = 0, j = 0;
    printf("Intersection: ");
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            printf("%d ", a[i]);
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return 0;
}