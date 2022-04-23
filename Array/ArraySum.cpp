#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "sum of array: " << sum;
}
