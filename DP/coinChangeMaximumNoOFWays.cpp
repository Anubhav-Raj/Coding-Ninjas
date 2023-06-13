// 518. Coin Change II (LeetCode)
#include <bits/stdc++.h>
using namespace std;

int subsetsumwithgivensum(int arr[], int n, int sum)
{

    int tp[n + 1][sum + 1];
    // Intilization
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {

            if (i == 0)
            {
                tp[i][j] = 0;
            }
            if (j == 0)
            {
                tp[i][j] = 1;
            }
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if (arr[i - 1] <= j)
            {
                tp[i][j] = tp[i - 1][j] + tp[i][j - arr[i - 1]];
            }
            else
            {
                tp[i][j] = tp[i - 1][j];
            }
        }
    }
    return tp[n][sum];
}
int main()
{
    // code hear
    int n, amount;
    cin >> n >> amount;
    int coins[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    cout << subsetsumwithgivensum(coins, n, amount);
}