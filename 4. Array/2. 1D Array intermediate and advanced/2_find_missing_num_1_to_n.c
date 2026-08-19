#include<stdio.h>
int main()
{
    int arr[] ={1,2,3,5,6,7};
    int n = 7;
    int size = sizeof(arr)/sizeof(arr[0]);
    int expectedSum= (n *(n+1))/2;
    int actualSum =0;
    for (int i = 0; i <size; i++)
    {
        actualSum += arr[i];
    }
    int diff = expectedSum - actualSum;
    printf("The missing number from 1 to %d is %d",n,diff);
    return 0;
}