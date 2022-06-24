#include <bits/stdc++.h>
using namespace std;
void solve(stack<int> &s, int size, int count)
{
    int mid = size / 2;
    if (mid == count)
    {
        s.pop();
        return;
    }
    int num = s.top();
    s.pop();

    // Recursive Call
    solve(s, size, count + 1);
    s.push(num);
}
void deleteMiddle(stack<int> &s, int N)
{

    solve(s, N, 0);
}

int main()
{
    // code hear
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int size = s.size();
    deleteMiddle(s, size);

    while (!s.empty())
    {
        int p = s.top();
        s.pop();
        cout << p << " ";
    }

    return 0;
}