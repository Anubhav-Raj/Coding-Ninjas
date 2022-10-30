#include <bits/stdc++.h>
using namespace std;
   void logestSubArry(int *arr, int n, int k){
 int i=0,j=0;
   int sum=0;
     int maxi=0;
   while( j<n){
      sum+=arr[j];
       if(sum<k){
         j++;
       } else if(sum==k){
              //cout<<i<<" "<<j<<endl;
               maxi=max((j-i+1),maxi);
              j++;
       } else if(sum>k){
          while(sum>k){
             sum-=arr[i];
             i++;
          }
           j++;
       }
   }
 cout<<maxi<<endl;
   }
 int main(){
// code hear
 int arr[7]={4,1,1,1,2,3,5};
      logestSubArry(arr,7,5);
 return 0;
}