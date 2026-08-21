#include<stdio.h>
int main()
{
    int arr[] = {3,4,5,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start =0, end = n-1;
    while(start< end){
        int mid = start + (end-start)/2;
        if(arr[mid]>arr[end]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    printf("the minimum element in the roteated sorted array = %d",arr[start]);   
    return 0;
}