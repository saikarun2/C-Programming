#include <stdio.h>
int main() {
    int n;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements in array: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int *left = a;
    int *right = a + n - 1;
    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
    for (int *p = a; p < a + n; p++){
        printf("%d ", *p);
    }
    return 0;
}