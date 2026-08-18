#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
                count++;
        }
        if (count == 1)
        {
            printf("First non-repeating element: %d", a[i]);
            return 0;
        }
    }
    printf("No non-repeating element found.");
    return 0;
}