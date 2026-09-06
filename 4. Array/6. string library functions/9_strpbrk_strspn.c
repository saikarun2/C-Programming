#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[] = "Hello123";
    char accept[] = "0123456789";
    char *result = strpbrk(str, accept);
    if (result != NULL){
        printf("strpbrk(): First digit is '%c'\n", *result);
    }
    else{
        printf("strpbrk(): No digit found\n");
    }
    char str2[] = "12345Hello";
    size_t count = strspn(str2, "0123456789");
    printf("strspn(): Number of initial digits = %zu\n", count);
    return 0;
}