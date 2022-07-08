#include <bits/stdc++.h>
using namespace std;
void sortedInserted(stack<int> &s, int x)
{
    // Base Case
    /*if (s.empty() )
    {
        s.push(x);
        return;
    }

    if (s.top() < x)
    {
        s.push(x);
        return;
    }*/
// both same
    if(s.empty() || (!s.empty() && s.top()< x)){
          s.push(x);
        return;
    }


    // int store top, and pop
    int num = s.top();
    s.pop();

    // Recursion
    sortedInserted(s, x);

    s.push(num);
}
void SortStack(stack<int> &s)
{
    // BAse Case
    if (s.empty())
    {
        return;
    }

    // int store top, and pop
    int num = s.top();
    s.pop();

    // Recursion Call
    SortStack(s);

    // Insert Element in sorted Way
    sortedInserted(s, num);
}
int main()
{
    // code hear
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(1);
    st.push(100);
    SortStack(st);
    while (!st.empty())
    {
        int data = st.top();
        st.pop();
        cout << data << " ";
    }
    cout << endl;

    return 0;
}