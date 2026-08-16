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
    int largest = arr[0],sec_largest=arr[0]; 
    for (int i = 1; i < n; i++){
        if(arr[i] > largest){
            sec_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > sec_largest && arr[i] < largest){
            sec_largest = arr[i];
        }
    }
    printf("the second largest element = %d ", sec_largest);
    return 0;
}