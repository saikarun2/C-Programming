#include<stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 2 ,2};
    int count =0;
    int ele =2;
    for (int i = 0; i < 5; i++)
    {
        if(arr[i] ==ele){
            count++;
        }
    }  
    printf("The element %d occurs %d time(s) in the array.\n", ele, count);
    return 0;
}