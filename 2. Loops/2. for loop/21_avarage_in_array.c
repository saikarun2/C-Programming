#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int total=0, avg=0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    avg = total/n;
    printf("The average of the array is: %d",avg);
    return 0;
}