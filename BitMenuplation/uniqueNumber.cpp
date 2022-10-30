#include <bits/stdc++.h>
using namespace std;
  void unique( int *arr, int n){
       int  p=0;
       for( int i=0;  i<n;i++){
          p= p^arr[i];
       }
        cout<<p<<endl;
  }
 int main(){
// code hear
 int arr[]={3,5,1,1,1,1,3};
  int n=7;// size of array always will be odd 
   unique(arr,n);
     
 return 0;
}