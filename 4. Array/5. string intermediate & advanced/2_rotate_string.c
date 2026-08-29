#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000], temp;
    int k, n, i, j;
    printf("enter the string: ");
    scanf("%999s%d", s, &k);
    n = strlen(s);
    k = k % n;
    for (i = 0, j = n - 1; i < j; i++, j--){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    for (i = 0, j = k - 1; i < j; i++, j--){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    for (i = k, j = n - 1; i < j; i++, j--){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    printf("%s", s);
    return 0;
}
