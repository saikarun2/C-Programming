#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000], sub[100];
    int i, j, count = 0;
    int n, m;
      printf("enter the string:\n");
    fgets(str, sizeof(str), stdin);
      printf("enter the sub string:\n");
    fgets(sub, sizeof(sub), stdin);
    str[strcspn(str, "\n")] = '\0';
    sub[strcspn(sub, "\n")] = '\0';
    n = strlen(str);
    m = strlen(sub);
    for (i = 0; i <= n - m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (str[i + j] != sub[j]){
                break;
            }
        }
        if (j == m){
            count++;
        }
    }
    printf("Occurrences = %d", count);
    return 0;
}
