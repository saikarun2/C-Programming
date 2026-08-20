#include <stdio.h>
int main() {
    int arr[] = {2, 3, -2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxProduct = arr[0];
    int currentMax = arr[0];
    int currentMin = arr[0];
    for (int i = 1; i < n; i++) {
        int x = arr[i];
        if (x < 0) {
            int temp = currentMax;
            currentMax = currentMin;
            currentMin = temp;
        }
        if (x > currentMax * x){
            currentMax = x;
        }
        else{
            currentMax = currentMax * x;
        }
        if (x < currentMin * x){
            currentMin = x;
        }
        else{
            currentMin = currentMin * x;
        }
        if (currentMax > maxProduct){
            maxProduct = currentMax;
        }
    }
    printf("Maximum product subarray: %d\n", maxProduct);
    return 0;
}