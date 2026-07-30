#include<stdio.h>
int main(){
    int n;
    printf("enter the n value: ");
    scanf("%d",&n);
    if(n%3==0 && n%5==0){
        printf("The given number is multiple of both 3 and 5");
    }
    if(n%3!=0 || n%5!=0){
        printf("The given number is not a multiple of both 3 and 5");
    }
}