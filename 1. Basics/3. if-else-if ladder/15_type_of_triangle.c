#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three sides of triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a){
        if(a==b && b==c){
            printf("the given triangle is equilateral triangle\n");
        }
        else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        }
        else {
            printf("The triangle is Scalene.\n");
        }
    }
    else{
        printf("The given sides do not form a triangle.\n");
    }   
    return 0;
}