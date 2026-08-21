#include<stdio.h>
int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int prefix[n];
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] =prefix[i-1] + arr[i];
    }
    printf("the prefix sum of array ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",prefix[i]);
    }
    printf("\n");
    int sRange, endRange;
    printf("enter the range of prefix sum from 1 to %d: ",n);
    scanf("%d %d",&sRange,&endRange);
    int rangeSum;
    if(sRange == 0){
        rangeSum = prefix[endRange];
    }
    else{
        rangeSum = prefix[endRange] - prefix[sRange-1]; 
    }
    printf("the sum of index from start range to end range in prefix sum =%d ", rangeSum);
    return 0;
}