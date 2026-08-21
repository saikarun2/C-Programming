#include<stdio.h>

int main()
{
    int arr[] = {1, 2, -3, -4, 5, -6, -7, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i =0 , j =1, temp;
    while(i<n && j<n){
        while(i<n && arr[i]>=0){
            i += 2;
        }
        while(j<n && arr[j]<0){
            j += 2;
        }
        if(i < n && j<n){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i += 2;
            j += 2;
        }
    }
    printf("the re arranged array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}