#include <stdio.h>
int main() {
    int n, element, i, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &element);
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            found = 1;
            break;
        }
    }
    if (found){
        printf("Element is present in the array.\n");
    }
    else{
        printf("Element is not present in the array.\n");
    }
    return 0;
}