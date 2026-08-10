#include <stdio.h>
int findLargest(int arr[], int n) {
    int i, largest;
    largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}
int main() {
    int arr[] = {10, 45, 23, 67, 12};
    int n = 5;
    printf("%d", findLargest(arr, n));
    return 0;
}
