#include <stdio.h>
int main() {
    int arr[] = {10, 22, 9, 33, 21, 50, 41, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int dp[n];
    int prev[n];
    int i, j;
    int maxLength = 1;
    int maxIndex = 0;
    for (i = 0; i < n; i++) {
        dp[i] = 1;
        prev[i] = -1;
    }
    for (i = 1; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (arr[i] > arr[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
                prev[i] = j;
            }
        }
        if (dp[i] > maxLength) {
            maxLength = dp[i];
            maxIndex = i;
        }
    }
    printf("Length of LIS: %d\n", maxLength);
    printf("Longest Increasing Subsequence: ");
    int lis[maxLength];
    int index = maxIndex;
    for (i = maxLength - 1; i >= 0; i--) {
        lis[i] = arr[index];
        index = prev[index];
    }
    for (i = 0; i < maxLength; i++) {
        printf("%d ", lis[i]);
    }
    return 0;
}