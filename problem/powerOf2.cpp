#include <bits/stdc++.h>
using namespace std;
int main()
{
  // code hear
  int n;
  cin >> n;

   // cheacking  odd or even
  if (n & 1 != 0)
  {
    cout << "Odd" << endl;
  }

  if ((n & (n - 1)) == 0)
  {
    cout << "Power of 2" << endl;
  }
  else
  {
    cout << "Not  power of 2" << endl;
  }

  return 0;
}