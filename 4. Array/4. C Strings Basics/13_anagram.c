#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char str1[1000], str2[1000];
    int count[256] = {0};
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    for (int i = 0; str1[i] != '\0'; i++) {
        if (isalnum((unsigned char)str1[i]))
            count[tolower((unsigned char)str1[i])]++;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        if (isalnum((unsigned char)str2[i])){
            count[tolower((unsigned char)str2[i])]--;
        }
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;
}
