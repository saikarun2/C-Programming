#include <stdio.h>
int main() {
    int num;
    int state;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num > 0){
        state = 1;
    }
    else{
        if(num < 0){
            state =-1;
        }
        else{
            state = 0 ;
        }
    }
    switch (state) {
        case 1:
            printf("%d is a POSITIVE number.\n", num);
            break;
        case -1:
            printf("%d is a NEGATIVE number.\n", num);
            break;
        case 0:
            printf("The number is ZERO.\n", num);
            break;
        default:
            printf("Invalid input.\n");
    }
    return 0;
}
