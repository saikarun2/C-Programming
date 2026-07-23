#include<stdio.h>

int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        if (ch >= 'A' && ch <= 'Z')
        {
            printf("The character is an uppercase letter.");
        }
        else{
            if (ch >= 'a' && ch <= 'z')
            {
                printf("The character is an lowercase letter.");
            }
            else{
                printf("The character is a number");
            }
        }
    }
    else{
        printf("The character is a special character");
    }
    return 0;
}