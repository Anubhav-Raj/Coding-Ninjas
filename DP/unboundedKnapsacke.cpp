#include <bits/stdc++.h>
using namespace std;

int unboundedKnapsacke(int wt[], int val[], int W, int n)
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
    // code hear
    int val[] = {1, 4, 5, 7};
    int wt[] = {1, 3, 4, 5};
    int W = 10;
    int n = sizeof(wt) / sizeof(wt[0]);
    cout << "Maximun Profit : " << unboundedKnapsacke(wt, val, W, n) << endl;
    return 0;
}
