#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int c = cbrt(n);
    if(c * c * c == n){
        printf("Perfect cube");
    }
    if(c * c * c != n){
        printf("Not a perfect cube");
    }
    return 0;
}