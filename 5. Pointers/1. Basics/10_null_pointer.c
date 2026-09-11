#include <stdio.h>
int main()
{
    int *ptr = NULL;
    if (ptr == NULL){
        printf("The pointer is NULL.\n");
    }
    else{
        printf("The pointer is not NULL.\n");
    }
    return 0;
}