#include <bits/stdc++.h>
using namespace std;
 priority_queue<int,vector<int>,greater<int>> min_heap;
  int maximunElement( int arr[], int n, int k){
       for( int i=0;i<n;i++){
         min_heap.push(arr[i]);
          if(min_heap.size()>k){
             min_heap.pop();
          }
       }
        
        return min_heap.top();
  }
 int main(){
// code hear
       int arr[]={7,10,4,3,20,15};
       int n=6;
        int k=1;
         cout<<k<<"th largest Element is: "<<maximunElement(arr,n,k);
 return 0;
}