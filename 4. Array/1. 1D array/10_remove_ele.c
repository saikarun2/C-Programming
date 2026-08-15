#include <stdio.h>
int main() {
    int n, index, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter index to remove (0 to %d): ", n - 1);
    scanf("%d", &index);
    if (index < 0 || index >= n) {
        printf("Invalid index.\n");
        return 0;
    }
    for (i = index; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Array after removal: ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}