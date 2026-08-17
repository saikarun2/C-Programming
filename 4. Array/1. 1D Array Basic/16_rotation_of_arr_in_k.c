#include <stdio.h>
void rotateRight(int a[], int n, int k)
{
    if (n <= 1) return;
    k %= n;
    if (k == 0) return;
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    for (int i = 0, j = k - 1; i < j; i++, j--) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    for (int i = k, j = n - 1; i < j; i++, j--) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
int main()
{
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter number of times array to rotate: ");
    scanf("%d", &k);
    rotateRight(a, n, k);
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}