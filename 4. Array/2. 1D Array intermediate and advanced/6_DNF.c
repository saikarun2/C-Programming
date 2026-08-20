#include<stdio.h>
int main()
{
    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low =0 , mid = 0, high =n-1, temp;
    while (mid<=high)
    {
        if(arr[mid] == 0){
            temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            temp = arr[mid];
            arr[low] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}