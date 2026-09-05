#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *end;
    long integer;
    double decimal;
    integer = strtol("12345", &end, 10);
    decimal = strtod("123.45", &end);
    printf("Integer: %ld\n", integer);
    printf("Decimal: %.2f\n", decimal);
    return 0;
}
