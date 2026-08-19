#include<stdio.h>
#include<limits.h>
int main()
{
    int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
    int cSum =0, maxSum = INT_MIN;
    int n = sizeof(nums)/sizeof(nums[0]);
    for (int i = 0; i < n; i++)
    {
        cSum += nums[i];
        if(maxSum <cSum){
            maxSum = cSum;
        }
        if(cSum < 0){
            cSum = 0;
        } 
    }
    printf("The maximum sum of the subarray = %d", maxSum);
    return 0;
}