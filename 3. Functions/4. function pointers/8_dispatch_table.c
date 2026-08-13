#include <stdio.h>
void add()
{
    printf("Addition selected\n");
}
void subtract()
{
    printf("Subtraction selected\n");
}
void multiply()
{
    printf("Multiplication selected\n");
}
void divide()
{
    printf("Division selected\n");
}
int main()
{
    int choice;
    void (*dispatchTable[4])() = {
        add,
        subtract,
        multiply,
        divide
    };
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice >= 1 && choice <= 4)
    {
        dispatchTable[choice - 1]();
    }
    else
    {
        printf("Invalid choice\n");
    }
    return 0;
}
