#include <stdio.h>
int countWays(int coins[], int n, int amount, int memo[])
{
    if (amount == 0) {
        return 1;
    }
    if (amount < 0 || n == 0) {
        return 0;
    }
    if (memo[amount] != -1) {
        return memo[amount];
    }
    memo[amount] = countWays(coins, n, amount - coins[n - 1], memo)+ countWays(coins, n - 1, amount, memo);
    return memo[amount];
}
int main()
{
    int coins[] = {1, 2, 5};
    int n = 3;
    int amount = 5;
    int memo[amount + 1];
    for (int i = 0; i <= amount; i++) {
        memo[i] = -1;
    }
    printf("Number of ways = %d",countWays(coins, n, amount, memo));
    return 0;
}