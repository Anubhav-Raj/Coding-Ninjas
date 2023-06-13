#include <bits/stdc++.h>
using namespace std;
int LCS(string X, string Y, int m, int n)
{
    int tp[m + 1][n + 1];
    // Intilization
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

    // choice Diagram
    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (X[i - 1] == Y[j - 1])
            {
                tp[i][j] = tp[i - 1][j - 1] + 1;
            }
            else
            {
                tp[i][j] = max(tp[i - 1][j], tp[i][j - 1]);
            }
        }
    }
    return tp[m][n];
}
// Function to find length of shortest common supersequence of two strings.
int shortestCommonSupersequence(string X, string Y, int m, int n)
{

    // code here
    int total_length = m + n;
    int LCS_length = LCS(X, Y, m, n);
    return (total_length - LCS_length);
}
int main()
{
    // code hear
    string x = "AGGTAB", y = "GXTXAYB";
    int m = x.length(), n = y.length();
    return shortestCommonSupersequence(x, y, m, n);

    return 0;
}