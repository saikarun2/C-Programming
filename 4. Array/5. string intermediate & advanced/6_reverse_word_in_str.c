#include <stdio.h>
#include <string.h>
void reverse(char *s, int l, int r)
{
    while (l < r) {
        char temp = s[l];
        s[l++] = s[r];
        s[r--] = temp;
    }
}
int main(void)
{
    char s[1000];
    int n, start = 0;
    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);
    n = strlen(s);
    if (n > 0 && s[n - 1] == '\n'){
        s[--n] = '\0';
    }
    reverse(s, 0, n - 1);
    for (int i = 0; i <= n; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            reverse(s, start, i - 1);
            start = i + 1;
        }
    }
    printf("Reversed sentence: %s\n", s);
    return 0;
}
