#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements in array: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for (int *p = a; p < a + n; p++){
        sum += *p;
    }
    printf("Sum = %d\n", sum);
    return 0;
}