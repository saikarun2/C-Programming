#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int freq[1001] = {0};
     printf("array duplicate elements are: ");
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] == 2){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}