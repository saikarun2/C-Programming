#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int prod =1;
    for (int i = 0; i < n; i++) {
        prod *= arr[i];
    }
    printf("The product of the array is: %d",prod);
    return 0;
}