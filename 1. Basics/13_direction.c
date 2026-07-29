#include<stdio.h>
int main()
{
    char dic;
    printf("enter the direction(N/S/E/W): ");
    scanf("%c",&dic);
    switch (dic)
    {
    case 'N':
    case 'n':
        printf("North\n");
        break;
    case 'S':
    case 's':
        printf("South\n");
        break;
    case 'E':
    case 'e':
        printf("East\n");
        break;
    case 'W':
    case 'w':
        printf("West\n");
        break;
    default:
        printf("Enter the correct direction\n");
    }
    return 0;
}