#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Enter array elements: ");
    for (i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    memcpy(arr2,arr1,n*sizeof(int));
    printf("array elements after copy: ");
    for (i = 0; i < n; i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}