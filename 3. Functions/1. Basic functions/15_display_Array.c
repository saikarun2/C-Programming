#include <stdio.h>
void displayArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    displayArray(arr, n);
    return 0;
}