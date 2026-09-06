#include <stdio.h>
#include <stddef.h>
size_t my_strlen(const char *s)
{
    const char *p = s;
    while (*p){
        ++p;
    }
    return (size_t)(p - s);
}
char *my_strcpy(char *dest, const char *src)
{
    char *d = dest;
    while ((*d++ = *src++));
    return dest;
}
char *my_strcat(char *dest, const char *src)
{
    char *d = dest;
    while (*d){
        ++d;
    }
    while ((*d++ = *src++));
    return dest;
}
int my_strcmp(const char *s1, const char *s2)
{
    while (*s1 && *s1 == *s2) {
        ++s1;
        ++s2;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}
int main(void)
{
    char str1[100] = "Hello";
    char str2[] = " World";
    printf("Length : %zu\n", my_strlen(str1));
    my_strcpy(str1, "Hello");
    printf("strcpy : %s\n", str1);
    my_strcat(str1, str2);
    printf("strcat : %s\n", str1);
    printf("strcmp : %d\n", my_strcmp("abc", "abd"));
    return 0;
}
