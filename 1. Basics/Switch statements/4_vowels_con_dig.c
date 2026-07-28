#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    switch (ch)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
                printf("%c is a consonant.\n", ch);
            }
            else if (ch >= '0' && ch <= '9'){
                printf("%c is a digit.\n", ch);
            }
            else
            {
                printf("%c is a special character.\n", ch);
            }
    }
    return 0;
}