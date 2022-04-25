#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums1{1, 4, 7, 0, 0};
    vector<int> nums2{6, 7, 7};

    int m = nums1.size();
    int n = nums2.size();

    int i = 0, j = 0, k = 0;
    vector<int> v(m + n);
    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            v[k] = nums1[i];
            k++;
            i++;
        }
        else
        {
            v[k] = nums2[j];
            k++;
            j++;
        }
    }
    while (i < m)
    {
        v[k] = nums1[i];
        k++;
        i++;
    }
    while (j < n)
    {
        v[k] = nums2[j];
        k++;
        j++;
    }
    for (int i = 0; i < k; i++)
    {
        nums1[i] = v[i];
    }

    for (int i : v)
    {
        cout << i << " ";
    }
}