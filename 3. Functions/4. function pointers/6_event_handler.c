#include <stdio.h>
void onClick()
{
    printf("Button Clicked!\n");
}
void onExit()
{
    printf("Exit Event Triggered!\n");
}
void triggerEvent(int event, void (*handler)())
{
    printf("Event: %d\n", event);
    handler();
}
int main()
{
    void (*eventHandler)();
    eventHandler = onClick;
    triggerEvent(1, eventHandler);
    eventHandler = onExit;
    triggerEvent(2, eventHandler);
    return 0;
}
