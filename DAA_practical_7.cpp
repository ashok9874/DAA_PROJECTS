#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minCoins(vector<int>& coins, int amount)
{
    // dp[i] = minimum coins required to make amount i
    vector<int> dp(amount + 1, amount + 1);

    // Base case
    dp[0] = 0;

    // Calculate minimum coins for every amount
    for (int i = 1; i <= amount; i++)
    {
        for (int coin : coins)
        {
            if (coin <= i)
            {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    // If amount cannot be formed
    if (dp[amount] > amount)
        return -1;

    return dp[amount];
}

int main()
{
    int n, amount;

    cout << "Enter number of coins: ";
    cin >> n;

    vector<int> coins(n);

    cout << "Enter coin denominations: ";
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    cout << "Enter amount: ";
    cin >> amount;

    int result = minCoins(coins, amount);

    if (result == -1)
        cout << "Amount cannot be formed." << endl;
    else
        cout << "Minimum number of coins = " << result << endl;

    return 0;
}  



Output:Enter number of coins: 3
Enter coin denominations: 1 2 5
Enter amount: 11

Minimum number of coins = 3