#include <bits/stdc++.h>
using namespace std;
int mimimumSubsetDiff(int arr[], int n)
{

    // Finding  the range  whare s1 and s2 lie in b/w
    int range = 0;
    for (int i = 0; i < n; i++)
    {
        range += arr[i];
    }

    // simple subset problem  we intilization
    // Initialize first column as true. 0 sum is possible  with all elements.
    bool tp[n + 1][range + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < range + 1; j++)
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
    // Fill the partition table in bottom up manner
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < range + 1; j++)
        {
            if (arr[i - 1] <= j)
            {
                tp[i][j] = tp[i - 1][j] || tp[i - 1][j - arr[i - 1]];
            }
            else
            {
                tp[i][j] = tp[i - 1][j];
            }
        }
    }

    // vector<bool> last_col;
    int min_diff = INT_MAX;

    for (int j = range / 2; j > 0; j--)
    {

        if (tp[n][j] == true)
        {
            cout << j << " ";
            min_diff = min(min_diff, range - 2 * j);
        }
    }
    cout << endl;

    return min_diff;
}
int main()
{
    // code hear
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << mimimumSubsetDiff(arr, n);

    return 0;
}