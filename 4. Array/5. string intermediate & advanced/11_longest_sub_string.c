#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int last[256];
    int start = 0, maxLen = 0, maxStart = 0;
    int i, len;
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    len = strlen(s);
    if (len > 0 && s[len - 1] == '\n'){
        s[--len] = '\0';
    }
    for (i = 0; i < 256; i++){
        last[i] = -1;
    }
    for (i = 0; i < len; i++)
    {
        if (last[(unsigned char)s[i]] >= start){
            start = last[(unsigned char)s[i]] + 1;
        }
        last[(unsigned char)s[i]] = i;
        if (i - start + 1 > maxLen)
        {
            maxLen = i - start + 1;
            maxStart = start;
        }
    }
    printf("Longest substring: ");
    for (i = maxStart; i < maxStart + maxLen; i++){
        putchar(s[i]);
    }
    printf("\nLength: %d\n", maxLen);
    return 0;
}
