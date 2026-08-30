#include <stdio.h>
#include <string.h>
int main() {
    char str1[1000], str2[1000];
    int freq[256] = {0};
    printf("enter the string1: ");
    fgets(str1, sizeof(str1), stdin);
    printf("enter the string2: ");
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    if (strlen(str1) != strlen(str2)) {
        printf("Not a permutation\n");
        return 0;
    }
    for (int i = 0; str1[i]; i++){
        freq[(unsigned char)str1[i]]++;
    }
    for (int i = 0; str2[i]; i++) {
        if (--freq[(unsigned char)str2[i]] < 0) {
            printf("Not a permutation\n");
            return 0;
        }
    }
    printf("Permutation\n");
    return 0;
}
