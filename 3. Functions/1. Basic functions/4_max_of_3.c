#include<stdio.h>
void largest(int a, int b, int c){
    if(a>b && a>c){
        printf("A is the greatest\n");
    }
    else if(b>a && b>c){
        printf("B is the greastest\n");
    }
    else{
        printf("C is the greatest\n");
    }
}
int main()
{
    int a=5, b=10,c=2;
    largest(a,b,c);
    return 0;
}