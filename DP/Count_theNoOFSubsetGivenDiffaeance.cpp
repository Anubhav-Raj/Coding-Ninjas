#include <bits/stdc++.h>
using namespace std;
int mimimumSubsetDiff(int arr[], int n, int sum)
{

    int tp[n + 1][sum + 1];
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
    // Fill the partition table in bottom up manner
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if (arr[i - 1] <= j)
            {
                tp[i][j] = tp[i - 1][j] + tp[i - 1][j - arr[i - 1]];
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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int diff;
    cin >> diff;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int s1 = (sum - diff) / 2;
    cout << mimimumSubsetDiff(arr, n, s1);

    return 0;
}
