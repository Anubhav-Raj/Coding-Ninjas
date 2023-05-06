#include <bits/stdc++.h>
using namespace std;

// Define Static Matrix
int static t[10][10];

// Recursive + menorized
int knapsack(int wt[], int val[], int W, int n)
{
    // Base Condiation
    if (n == 0 || W == 0)
    {
        return 0;
    }

    if (t[n][W] != -1)
    {
        return t[n][W];
    }

    // Choise Diagram
    if (wt[n - 1] <= W)
    {
        return t[n][W] = max(val[n] + knapsack(wt, val, W - wt[n - 1], n - 1), knapsack(wt, val, W, n - 1));
    }
    else
    {

        return t[n][W] = knapsack(wt, val, W, n - 1);
    }
}

int TopDownApproch(int wt[], int val[], int W, int n)
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
                tp[i][j] = max(val[i - 1] + tp[i - 1][j - wt[i - 1]], tp[i - 1][j]);
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
    // code hear
    memset(t, -1, sizeof(t)); // it use to intilize all  value with -1 in matrix

    int val[] = {1, 4, 5, 7};
    int wt[] = {1, 3, 4, 5};
    int W = 10;

    // int val[] = {60, 100, 120};
    // int wt[] = {10, 20, 30};
    // int W = 50;

    int n = sizeof(wt) / sizeof(wt[0]);

    cout << "Maximun Profit : " << knapsack(wt, val, W, n) << endl;
    // cout << "Maximun Profit : " << TopDownApproch(wt, val, W, n) << endl;

    return 0;
}
