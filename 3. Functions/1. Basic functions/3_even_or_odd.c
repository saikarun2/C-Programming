#include<stdio.h>
void check(int a){
    if(a %2 ==0){
        printf("The given number is even\n");
    }else{
        printf("The given number is odd\n");
    }
}
int main()
{
    int a=5, b=10;
    check(a);
    check(b);
    return 0;
}