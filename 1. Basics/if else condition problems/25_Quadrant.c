#include<stdio.h>

int main()
{
    int x,y;
    printf("enter the vlaues of x and y: ");
    scanf("%d %d",&x,&y);
    if(x>0){
        if(y>0){
            printf("The point lies in First Quadrant");
        }
        else{
            printf("The point lies in Fourth Quadrant");
        }
    }
    else{
        if(y>0){
            printf("The point lies in second Quadrant");
        }
        else{
            printf("The point lies in Third Quadrant");
        }
    }
    return 0;
}