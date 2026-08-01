#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0){
        if (n > 50){
            printf("The number is even and greater than 50.");
        }
        else{
            printf("The number is even but not greater than 50.");
        }
    }
    else{
        if (n > 50){
            printf("The number is odd but greater than 50.");
        }
        else{
            printf("The number is odd and not greater than 50.");
        }
    }
    return 0;
}