#include <bits/stdc++.h>
using namespace std;

// Recursive code for Find LCS
int LCS(string x, string y, int m, int n)
{

    // base case
    if (n == 0 || m == 0)
    {
        return 0;
    }
    if (x[n - 1] == y[m - 1])
    {
        return 1 + LCS(x, y, m - 1, n - 1);
    }
    else
    {
        return max(LCS(x, y, m - 1, n), LCS(x, y, m, n - 1));
    }
}

// Recursive + memorizeid  code( more time efficent code  as compare to recusive code( above code))
int static tp[1000][1000];
int LCS_menorized(string x, string y, int m, int n)
{

    // base case
    if (n == 0 || m == 0)
    {
        return 0;
    }
    // choice diagram
    if (tp[m][n] != -1)
    {
        return tp[m][n];
    }
    if (x[m - 1] == y[n - 1])
    {
        return tp[m][n] = 1 + LCS(x, y, m - 1, n - 1);
    }
    else
    {
        return tp[m][n] = max(LCS(x, y, m - 1, n), LCS(x, y, m, n - 1));
    }
}

int LCS_topdown(string x, string y, int m, int n)
{
    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                tp[i][j] = 0;
            }
        }
    }

    // choise diagram
    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (x[i - 1] == y[j - 1])
            {
                tp[i][j] = 1 + tp[i - 1][j - 1];
            }
            else
            {
                tp[i][j] = max(tp[i][j - 1], tp[i - 1][j]);
            }
        }
    }
    return tp[m][n];
}

int main()
{
    // code hear

    string x, y;
    cin >> x >> y;

    int m = x.length();
    int n = y.length();

    // cout << LCS(x, y, m, n);

    memset(tp, -1, sizeof(tp));
    // cout << LCS_menorized(x, y, m, n);

    cout << LCS_topdown(x, y, m, n);

    return 0;
}