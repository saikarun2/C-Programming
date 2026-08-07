#include<stdio.h>
int main()
{
    int sum = 0;
    for(int i = 1; i <= 100; i++){
        if(i%2==1){
            sum += i; 
        }
    }
    printf("the sum of odd numbers form 1 to 100 = %d ",sum);
    return 0;
}