#include <stdio.h>
#include <string.h>
int main()
{
    char text[1000], pattern[1000];
    int lps[1000];
    int n, m, i, j;
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    printf("Enter pattern: ");
    fgets(pattern, sizeof(pattern), stdin);
    n = strlen(text);
    if (n > 0 && text[n - 1] == '\n'){
        text[--n] = '\0';
    }
    m = strlen(pattern);
    if (m > 0 && pattern[m - 1] == '\n'){
        pattern[--m] = '\0';
    }
    lps[0] = 0;
    i = 1;
    j = 0;
    while (i < m)
    {
        if (pattern[i] == pattern[j])
        {
            lps[i] = ++j;
            i++;
        }
        else if (j != 0)
        {
            j = lps[j - 1];
        }
        else
        {
            lps[i] = 0;
            i++;
        }
    }
    i = 0;
    j = 0;
    while (i < n)
    {
        if (text[i] == pattern[j])
        {
            i++;
            j++;
        }
        if (j == m)
        {
            printf("Pattern found at index %d\n", i - j);
            j = lps[j - 1];   
        }
        else if (i < n && text[i] != pattern[j])
        {
            if (j != 0){
                j = lps[j - 1];
            }
            else{
                i++;
            }
        }
    }
    return 0;
}
