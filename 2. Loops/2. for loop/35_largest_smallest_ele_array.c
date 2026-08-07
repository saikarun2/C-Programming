#include <stdio.h>
int main() {
    int arr[] = {12, 45, 7, 89, 34, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest, secondLargest;
    int smallest, secondSmallest;
    int i;
    largest = secondLargest = arr[0];
    smallest = secondSmallest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    for (i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }
    printf("Second Largest = %d\n", secondLargest);
    printf("Second Smallest = %d\n", secondSmallest);
    return 0;
}
