#include <stdio.h>
#include <string.h>
int main(void) {
    char str1[1000], str2[1000], temp[2000];
    printf("Enter a string1: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter a string2: ");
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    if (strlen(str1) != strlen(str2)) {
        printf("Not rotations\n");
        return 0;
    }
    strcpy(temp, str1);
    strcat(temp, str1);
    if (strstr(temp, str2)){
        printf("Strings are rotations\n");
    }
    else{
        printf("Not rotations\n");
    }
    return 0;
}