#include <stdio.h>
#include <string.h>
void checkPalindrome(char str[]) {
    int i, length, flag = 0;
    length = strlen(str);
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("The string is a palindrome");
    else
        printf("The string is not a palindrome");
}
int main() {
    char str[] = "madam";
    checkPalindrome(str);
    return 0;
}