#include <stdio.h>
int main() {
    int n, i, sorted = 1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = 0;
            break;
        }
    }
    if (sorted){
        printf("Array is sorted in ascending order.\n");
    }
    else{
        printf("Array is not sorted in ascending order.\n");
    }
    return 0;
}