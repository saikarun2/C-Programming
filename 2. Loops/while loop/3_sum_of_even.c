#include<stdio.h>
int main()
{
    int i=1, sum=0;
    while(i<=100){
        if(i%2==0){
            sum+=i;
        }
        i++;
    }
    printf("The sum if even numbers from 1 to 100 = %d",sum);
    return 0;
}