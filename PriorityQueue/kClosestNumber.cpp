#include <bits/stdc++.h>
using namespace std;
priority_queue<pair<int,int>>max_heap;
  void KClosestHeap( int arr[], int n , int k, int x){

      for( int i=0;i< n;i++){
         max_heap.push({abs(arr[i]-x),arr[i]});
      }
        while(max_heap.size()>k){
             max_heap.pop();
        }
        while(max_heap.size()>0){
             cout<<max_heap.top().first<<" "<<max_heap.top().second<<endl;
             max_heap.pop();
        }
      
  }
 int main(){
// code hear
     int arr[]={5,6,7,8,9};
       int n=5;
        int k=3;
         int x=7;
     KClosestHeap(arr,n,k,x);
 return 0;
}