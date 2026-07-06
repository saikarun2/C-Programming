#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    int root =sqrt(num);
    if(root *root == num){
        printf("the given number is a perfect square");
    }
    else{
        printf("the given number is not a perfect square");
    }
}