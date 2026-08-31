#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    char str[n][100];
    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++){
        scanf("%99s", str[i]);
    }
    int prefix_len = strlen(str[0]);
    for (int i = 1; i < n; i++) {
        int j = 0;
        while (j < prefix_len &&
               str[0][j] == str[i][j]) {
            j++;
        }
        prefix_len = j;
        if (prefix_len == 0){
            break;
        }
    }
    printf("Longest Common Prefix: ");
    for (int i = 0; i < prefix_len; i++){
        putchar(str[0][i]);
    }
    putchar('\n');
    return 0;
}