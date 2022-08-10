#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
    int n = nums.size();

    // only singleElement present in array
    if (n < 2)
        return n;

    // To store index of next unique element
    int j = 0;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[j])
        {
            j++;
            nums[j] = nums[i];
        }
    }

    return j + 1;
}
int main()
{
    vector<int> nums = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    
 
    // removeDuplicates() returns new size of
    // array.
     int n = removeDuplicates(nums);
 
    // Print updated array
    for (int i=0; i<n; i++)
        cout << nums[i] << " ";

    return 0;
}