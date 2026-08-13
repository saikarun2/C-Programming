#include <stdio.h>
typedef struct
{
    void (*draw)();
} Shape;
void drawCircle()
{
    printf("Drawing Circle\n");
}
void drawRectangle()
{
    printf("Drawing Rectangle\n");
}
void drawTriangle()
{
    printf("Drawing Triangle\n");
}
int main()
{
    Shape circle;
    Shape rectangle;
    Shape triangle;
    circle.draw = drawCircle;
    rectangle.draw = drawRectangle;
    triangle.draw = drawTriangle;
    circle.draw();
    rectangle.draw();
    triangle.draw();
    return 0;
}
