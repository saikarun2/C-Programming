#include <stdio.h>
int main() {
    char s[1000];
    int i, j = 0;
    printf("enter the string: ");
    scanf("%999s", s);
    for (i = 0; s[i] != '\0'; i++) {
        if (i == 0 || s[i] != s[i - 1]){
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
    printf("%s\n", s);
    return 0;
}
