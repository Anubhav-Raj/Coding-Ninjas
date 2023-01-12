#include <bits/stdc++.h>
using namespace std;

// Unique 2N+1
void unique(int *arr, int n)
{
  int p = 0;
  for (int i = 0; i < n; i++)
  {
    p = p ^ arr[i];
  }
  cout << p << endl;
}

// unique 2N+2
void unique2(int *arr, int n)
{
  int p = 0;
  for (int i = 0; i < n; i++)
  {
    p = p ^ arr[i];
  }
  // postion  of first set bit (right->left)
  int temp = p;
  int pos = 0;
  while ((temp & 1) == 0)
  {
    pos++;
    temp = temp >> 1;

  }


// filter out the number from array which have set bit at "postion"
  int setA=0;
  int setB=0;
  int mask=(1<<pos);

  for (int i = 0; i < n; i++)
  {
    if ( (arr[i]&mask)>0)
    {
       setA= setA^arr[i];
    }
    else
    {
      setB= setB^arr[i];
    }
  }

  cout << setA << " " << setB << endl; 
}

// Uniquue 3N+1

 void update(vector<int> &sumArr, int x){
// Extract  all bit of x
      for( int i=0; i<32;i++){
         int last_bit= x &(1<<i);
         if(last_bit){
             sumArr[i]++;
         }
      }
 }

 int  numfrombit( vector<int> sumArr){
      int n=0;
          for( int i=0;i<32;i++){
              n+= (sumArr[i]*(1<<i));
          }
           return n;

 }
 int unique3(vector<int> arr){
     vector<int> sumArr(32,0);// fill constructor
     for( int x: arr){
       update(sumArr,x);
     }
       for( int i=0;i<32;i++){
           sumArr[i]= sumArr[i]%3;
       }
         int num=numfrombit(sumArr);
    return num;
 }

int main()
{
  // code hear
   vector<int> arr = {1,2,5,4,3,1,5,5,3,1};
  int n = 10; // size of array always will be odd
  // unique(arr,n);
  cout<<unique3(arr);
  return 0;
}