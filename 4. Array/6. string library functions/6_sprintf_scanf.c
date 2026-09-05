#include <stdio.h>
int main()
{
    char str[100];
    char name[30];
    int age;
    float marks;
    sprintf(str, "Name: %s, Age: %d, Marks: %.2f", "Sai", 25, 95.5f);
    printf("Formatted string: %s\n", str);
    sscanf(str, "Name: %29[^,], Age: %d, Marks: %f", name, &age, &marks);
    printf("Name  : %s\n", name);
    printf("Age   : %d\n", age);
    printf("Marks : %.2f\n", marks);
    return 0;
}
