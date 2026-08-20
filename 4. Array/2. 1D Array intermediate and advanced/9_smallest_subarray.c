#include <stdio.h>
int main() {
    int arr[] = {2, 3, 1, 2, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int S = 7;
    int left = 0;
    int sum = 0;
    int minLength = n + 1;
    int start = -1;
    int end = -1;
    for (int right = 0; right < n; right++) {
        sum += arr[right];
        while (sum >= S) {
            int length = right - left + 1;
            if (length < minLength) {
                minLength = length;
                start = left;
                end = right;
            }
            sum -= arr[left];
            left++;
        }
    }
    if (minLength == n + 1) {
        printf("No subarray found\n");
    } else {
        printf("Smallest subarray length: %d\n", minLength);
        printf("Smallest subarray: ");
        for (int i = start; i <= end; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        printf("Sum: %d\n", S);
    }
    return 0;
}