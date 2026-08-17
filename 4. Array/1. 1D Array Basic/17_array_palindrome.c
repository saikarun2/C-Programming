#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int isPalindrome = 1;
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        if (a[i] != a[j]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome){
        printf("Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
    return 0;
}