#include <bits/stdc++.h>
using namespace std;
int getithbit(int n, int i)
{

  if (((1 << i) & n) > 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void claerithBit(int n, int i)
{
  n = n & (~(1 << i));
  // cout << n << endl;
}
void setithbit(int &n, int i)
{
  int mask = 1 << i;

  n = (n | mask);
  cout << n << endl;
}
void updatedithbit(int &n, int v, int i)
{
  claerithBit(n, i);
  int mask = (v << i);
  n = n | mask;
  cout << n << endl;
}

void clearLastIthBith(int &n, int i)
{
  int a = 0;
  a = (~a);
  a = a << i;
  n = (a & n);
  cout << n << endl;
}
 void clearBithinRange(int &n, int i, int j){
   int a=(~a)<<(j+1);
    int b= (1<<i)-1;
     int mask=a|b;
      n= n&mask;
       cout<<n<<endl;
 }
int main()
{
  // code hear
  int n;
  cin >> n;
  int i;
  cin >> i;
  // cout<<getithbit(n,i)<<endl;
  // claerithBit(n,i);
  // setithbit(n,i);
  // updatedithbit(n, 0, i);
  //clearLastIthBith(n, i);
   int j;
    cin>>j;
  clearBithinRange(n,i,j);
  return 0;
}