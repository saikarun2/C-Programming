#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int arr[] = {-1,0,1,2,-1,-4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 0;
    qsort(arr, n,sizeof(int),(int(*)(const void * , const void *))strcmp);
    for(int i =0; i < n; i++){
        int start = i+1;
        int end = n-1;
        while (start < end)
        {
            int sum = arr[i] + arr[start] + arr[end];
            if(sum == target){
                printf("[%d,%d,%d]", arr[i], arr[start], arr[end]);
                start++;
                end--;
            }
            else if(sum < target){
                start++;
            }
            else{
                end--;
            }
        }
    }
    return 0;
}