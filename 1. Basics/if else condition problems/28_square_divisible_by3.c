#include<stdio.h>
#include<math.h>
int main()
{
    int n , root;
    printf("enter the value of n: ");
    scanf("%d",&n);
    root = sqrt(n);
    if(n%3==0 && root * root ==n){
        printf("The number is divisible by 3 and is a perfect square.");
    }
    else{
        printf("The number is not both divisible by 3 and a perfect square.");
    }
    return 0;
}