#include<stdio.h>
int main()
{
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int candidate = 0, count =0;
    for (int i = 0; i < n; i++)
    {
        if( count ==0){
            candidate = arr[i];
            count = 1;
        }
        else if(arr[i] == candidate ){
            count++;
        }
        else{
            count--;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == candidate){
            count++;
        }
    }   
    if(count > n/2){
         printf("Majority element = %d\n", candidate);
    }
    else{
        printf("No majority element\n");
    }
    return 0;
}