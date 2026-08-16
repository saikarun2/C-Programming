#include <stdio.h>
int main() {
    int n, index, i,value;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n+1];
    printf("Enter array elements: ");
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter index to insert (0 to %d): ", n );
    scanf("%d", &index);
    if (index < 0 || index > n) {
        printf("Invalid index.\n");
        return 0;
    }
    printf("enter the value: ");
    scanf("%d",&value);
    for (i = n; i >index; i--){
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    n++;
    printf("Array after insert: ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}