// C++ program to remove duplicates in-place
#include <bits/stdc++.h>
using namespace std;

// Function to remove duplicate elements
// This function returns new size of modified array.
// Using Binarey Search to solve the particular problem efficiently
int binarySearch(vector<int> &nums, int low, int high, int val)
{
    int n = nums.size();
    int res = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // Check for lower limit
        if (nums[mid] <= val)
            low = mid + 1;
        // check for higher limit
        else
        {
            // move to higher limit
            res = mid;
            high = mid - 1;
        }
    }
    // check if not found
    if (res == -1)
        return n;

    return res;
}

int removeDuplicates(vector<int> &nums)
{
    int n = nums.size();
    int idx = 0; // It store indexing of unique elements.

    while (idx != n)
    {
        int i = binarySearch(nums, idx + 1, n - 1, nums[idx]); // It finds upper bound of elememt.

        if (i == n)
            return idx + 1; // Means that we are not able to upper bound of element.
        idx++;
        nums[idx] = nums[i];
    }
    return idx + 1;
}
// Driver code
int main()
{
    vector<int> arr{1, 2, 2, 3, 4, 4, 4, 5, 5};

    // removeDuplicates() returns new size of array.
    int n = removeDuplicates(arr);

    // Print updated array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
