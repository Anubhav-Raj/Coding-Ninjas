#include <bits/stdc++.h>
using namespace std;
int main()
{
    // code hear
    string str;
    cin >> str;
    stack<char> s;

    // Traverse the string and push  each latter into stack one by one
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }
    // to store final string
    string ans = "";

    // pop each latter from the stack appernd  at end of "ans"
    while (!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout<< ans << endl;

    return 0;
}