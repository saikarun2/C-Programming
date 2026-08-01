#include<stdio.h>
#include<math.h>
int main()
{
    int n,rev, aNum=0,temp,count=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    temp =n;
    while(temp>0){
        temp/=10;
        count++;
    }
    temp =n;
    while(temp>0){
        int rem = temp%10;
        aNum += (int) round(pow(rem, count));
        temp/=10;
    }
    if(n == aNum){
        printf("the given number is an amstrong number");
    }
    else{
        printf("the given number is not an amstrong number");
    }
    return 0;
}