#include <stdio.h>
int arraySum(int arr[], int n) {
    int i, sum = 0;
    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    printf("%d", arraySum(arr, n));
    return 0;
}