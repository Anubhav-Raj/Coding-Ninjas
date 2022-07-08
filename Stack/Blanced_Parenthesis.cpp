#include <bits/stdc++.h>
using namespace std;
bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char> s;
    for (int i = 0; i < expression.length(); i++)
    {
        char ch = expression[i];
             // if  opening Bracket ,Stack push;

             // if close  Bracket ,stack cheack and pop
         
        if (ch == '{' || ch == '(' || ch == '[')
        {
            s.push(ch);
        }
        else
        {
            // for closing  bracket
            if (!s.empty())
            {
                char top = s.top();
                if ((top == '{' && ch == '}') || (top == '(' && ch == ')') || (top == '[' && ch == ']'))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if (s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    // code hear
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        if (isValidParenthesis(str))
        {
            cout << "Blanced" << endl;
        }
        else
        {
            cout << "Not Blanced" << endl;
        }
    }

    return 0;
}