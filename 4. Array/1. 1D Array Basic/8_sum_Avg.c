#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5};
    int sum=0, n = sizeof(arr)/sizeof(arr[0]);
    float avg =0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }  
    avg = sum/n;
    printf("the sum of elements in array = %d\n",sum);
    printf("the average of the elements of the array = %.2f\n", avg);
    return 0;
}