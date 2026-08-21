#include <stdio.h>
int main()
{
    int arr[] = {1, 3, 5, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int totalSum = 0;
    int leftSum = 0;
    int equilibriumIndex = -1;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        totalSum -= arr[i];
        if (leftSum == totalSum)
        {
            equilibriumIndex = i;
            break;
        }
        leftSum += arr[i];
    }
    if (equilibriumIndex != -1){
        printf("Equilibrium index = %d\n", equilibriumIndex);
    }
    else{
        printf("No equilibrium index found\n");
    }
    return 0;
}