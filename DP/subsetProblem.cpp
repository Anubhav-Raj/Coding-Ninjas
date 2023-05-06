#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code hear
    int arr[] = {2, 3, 7, 8, 10};
    int sum = 6;
    int n = 5;
    bool tp[5 + 1][11 + 1];

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            if (i == 0)
            {
                tp[i][j] = false;
            }
            if (j == 0)
            {
                tp[i][j] = true;
            }
        }
    }

    // choise diagram

    for (int i = 1; i <= n + 1; i++)
    {
        for (int j = 1; j <= sum + 1; j++)
        {
            if (arr[i - 1] <= j)
            {
                tp[i][j] = tp[i - 1][j - arr[i - 1]] || tp[i - 1][j];
            }
            else
            {
                tp[i][j] = tp[i - 1][j];
            }
        }
    }
    if (tp[n][sum])
    {

        cout << " it is Possible" << endl;
    }
    else
    {

        cout << " it is  Not Possible" << endl;
    }

    return 0;
}