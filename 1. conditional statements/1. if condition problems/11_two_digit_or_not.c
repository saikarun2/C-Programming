#include <stdio.h>
int main(){
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if((n >= 10 && n <= 99) || (n >= -99 && n <= -10))
    {
        printf("The given integer is a two-digit number.");
    }
    if((n < 10 || n > 99) && (n > -10 || n < -99))
    {
        printf("The given integer is not a two-digit number.");
    }
    return 0;
}