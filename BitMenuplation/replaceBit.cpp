#include <bits/stdc++.h>
using namespace std;
void claerBitIInRange(int &n, int i, int j)
{
    int a = 0;
    a = (~a) << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    n = n & mask;
}
void replaceBit(int n, int m, int i, int j)
{
    claerBitIInRange(n, i, j);
    int mask = m << i;
    n = n | mask;
    cout << n << endl;
}
void powerOfTwo(int n)
{
    if ((n & (n - 1))!=0)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
}
int main()
{
    // code hear
    replaceBit(15, 2, 1, 3);
     cout<<endl;
     powerOfTwo(16);
    return 0;
}