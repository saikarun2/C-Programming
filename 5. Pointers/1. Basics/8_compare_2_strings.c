#include <stdio.h>
int main()
{
    char s1[100], s2[100];
    char *p = s1, *q = s2;
    printf("Enter first string: ");
    scanf("%99s", s1);
    printf("Enter second string: ");
    scanf("%99s", s2);
    while (*p && *p == *q){
        p++, q++;
    }
    if (*p == *q){
        printf("Strings are equal.\n");
    }
    else{
        printf("Strings are not equal.\n");
    }
    return 0;
}
