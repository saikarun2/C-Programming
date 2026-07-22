#include<stdio.h>

int main()
{
    int n, rev=0, temp;
    printf("enter the value of n: ");
    scanf("%d",&n);
    temp =n;
    while(temp>0){
        int rem = temp%10;
        rev = rev*10+rem;
        temp/=10;
    }
    if(n == rev){
        printf("The given value is Palindrome");
    }
    else{
        printf("The given value is not Palindrome");
    }
    return 0;
}