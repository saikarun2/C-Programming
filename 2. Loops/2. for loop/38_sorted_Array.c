#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    int sorted = 1;
    for (i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = 0;
            break;
        }
    }
    if (sorted){
        printf("Array is sorted in ascending order.");
    }
    else{
        printf("Array is not sorted in ascending order.");
    }
    return 0;
}
