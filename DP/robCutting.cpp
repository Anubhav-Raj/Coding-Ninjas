/*
Given a rod of length N inches and an array of prices, price[]. pricei denotes the value of a piece of length i. Determine the maximum value obtainable by cutting up the rod and selling the pieces.
Note: Consider 1-based indexing.
*/
#include <bits/stdc++.h>
using namespace std;
int unboundedLKnapsack(int wt[], int val[], int W, int n)
{

    int tp[n + 1][W + 1];
    // intilizition
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (i == 0 || j == 0)
            {
                tp[i][j] = 0;
            }
        }
    }

    // Choise Digram
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if (wt[i - 1] <= j)
            {
                tp[i][j] = max(val[i - 1] + tp[i][j - wt[i - 1]], tp[i - 1][j]);
            }
            else
            {
                tp[i][j] = tp[i - 1][j];
            }
        }
    }
    return tp[n][W];
}
int main()
{
    int n;
    cin >> n;
    int price[n];
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    int length[n];
    for (int i = 0; i < n; i++)
    {
        length[i] = i + 1;
    }
    return unboundedLKnapsack(length, price, n, n);
}