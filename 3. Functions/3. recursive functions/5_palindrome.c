#include <stdio.h>
#include <string.h>
int isPalindrome(char str[], int start, int end)
{
    if (start >= end) {
        return 1;
    }
    if (str[start] != str[end]) {
        return 0;
    }
    return isPalindrome(str, start + 1, end - 1);
}
int main()
{
    char str[] = "madam";
    int result = isPalindrome(str, 0, strlen(str) - 1);
    if (result) {
        printf("String is a palindrome");
    }
    else {
        printf("String is not a palindrome");
    }
    return 0;
}