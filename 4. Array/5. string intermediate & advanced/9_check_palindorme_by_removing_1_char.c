#include <stdio.h>
#include <string.h>
int isPalindrome(const char *s, int left, int right) {
    while (left < right) {
        if (s[left++] != s[right--]){
            return 0;
        }
    }
    return 1;
}
int canBecomePalindrome(const char *s) {
    int left = 0, right = strlen(s) - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return isPalindrome(s, left + 1, right) ||isPalindrome(s, left, right - 1);
        }
        left++;
        right--;
    }
    return 1; 
}
int main() {
    char s[1000];
    printf("enter the string: ");
    scanf("%999s", s);
    printf("%s\n", canBecomePalindrome(s) ? "YES" : "NO");
    return 0;
}
