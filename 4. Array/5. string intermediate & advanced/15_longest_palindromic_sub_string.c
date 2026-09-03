#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int dp[100][100];
    int n, i, j, len;
    int start = 0, maxLen = 1;
    printf("Enter string: ");
    scanf("%s", s);
    n = strlen(s);
    if (n == 0)
    {
        printf("Empty string\n");
        return 0;
    }
    for (i = 0; i < n; i++){
        dp[i][i] = 1;
    }
    for (i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            dp[i][i + 1] = 1;
            start = i;
            maxLen = 2;
        }
        else
        {
            dp[i][i + 1] = 0;
        }
    }
    for (len = 3; len <= n; len++)
    {
        for (i = 0; i <= n - len; i++)
        {
            j = i + len - 1;
            if (s[i] == s[j] && dp[i + 1][j - 1] == 1)
            {
                dp[i][j] = 1;
                if (len > maxLen)
                {
                    maxLen = len;
                    start = i;
                }
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }
    printf("Longest palindromic substring: ");
    for (i = start; i < start + maxLen; i++){
        printf("%c", s[i]);
    }
    printf("\nLength: %d\n", maxLen);
    return 0;
}
