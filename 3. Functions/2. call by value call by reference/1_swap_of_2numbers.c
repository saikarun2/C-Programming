#include<stdio.h>
void swap(int a , int b){
    int temp = a;
    a = b;
    b = temp;
    printf("in swap function  after swap a = %d  and b = %d\n",a,b);
}
int main()
{
    int a = 5 ,b=10;
    printf("in main  before function call a = %d  and b = %d\n",a,b);
    swap(a,b);
    printf("in main  after function call a = %d  and b = %d\n",a,b);
    return 0;
}