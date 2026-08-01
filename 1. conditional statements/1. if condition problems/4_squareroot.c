#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int s = sqrt(n);
    if(s * s == n)
        printf("Perfect square");
    if(s * s != n)
        printf("Not a perfect square");
    return 0;
}