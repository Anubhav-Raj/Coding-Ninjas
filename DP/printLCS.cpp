#include <bits/stdc++.h>
using namespace std;
string ptint_LCS(string s, string t)
{
    // Code here
    int m = s.size();
    int n = t.size();
    int tp[m + 1][n + 1];

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
            if (s[i - 1] == t[j - 1])
            {
                tp[i][j] = 1 + tp[i - 1][j - 1];
            }
            else
            {
                tp[i][j] = max(tp[i][j - 1], tp[i - 1][j]);
            }
        }
    }

    int i = m, j = n;
    string S = "";
    while (i > 0 && j > 0)
    {
        if (s[i - 1] == t[j - 1])
        {
            S.push_back(s[i - 1]);
            --i;
            --j;
        }
        else
        {
            if (tp[i - 1][j] > tp[i][j - 1])
            {
                i--;
            }
            else
            {
                j--;
            }
        }
    }
    reverse(S.begin(), S.end());
    return S;
}

int main()
{
    // code hear
    cout << ptint_LCS("acbcf", "abcdaf");

    return 0;
}