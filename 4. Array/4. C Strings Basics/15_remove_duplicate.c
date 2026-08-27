#include <stdio.h>
int main()
{
    char str[1000];
    int seen[256] = {0};
    int j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (!seen[ch]) {
            seen[ch] = 1;
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    printf("After removing duplicates: %s", str);
    return 0;
}
