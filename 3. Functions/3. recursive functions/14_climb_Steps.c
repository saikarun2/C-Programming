#include <stdio.h>
int countWays(int n)
{
    if (n == 0 || n == 1) {
        return 1;
    }
    return countWays(n - 1) + countWays(n - 2);
}
int main()
{
    int n = 5;
    printf("Number of ways = %d", countWays(n));
    return 0;
}