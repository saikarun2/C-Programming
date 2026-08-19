#include<stdio.h>
int main()
{
    int arr[] = {2,5,7,11};
    int target = 9;
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0, end = n-1;
    while(start < end){
        int sum = arr[start] + arr[end];
        if(sum == target){
            printf("Pair: %d + %d = %d\n",arr[start], arr[end], target);
            start++;
            end--;
        }
        else if(sum > target){
            end --;
        }
        else{
            start ++;
        }
    }
    return 0;
}