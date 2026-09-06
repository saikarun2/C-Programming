#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare_strings(const void *a, const void *b)
{
    const char *str1 = *(const char **)a;
    const char *str2 = *(const char **)b;
    return strcmp(str1, str2);
}
int main(void)
{
    char *names[] = {"Ravi","Anil","Kiran","Bhanu","Suresh"};
    int n = sizeof(names) / sizeof(names[0]);
    qsort(names, n, sizeof(names[0]), compare_strings);
    printf("Strings in sorted order:\n");
    for (int i = 0; i < n; i++){
        printf("%s\n", names[i]);
    }
    return 0;
}
