#include <bits/stdc++.h>
using namespace std;
 //priority_queue<int> min_heap;
 priority_queue <int, vector<int>, greater<int>> min_heap;
  vector<int> ans;
    void  nearSortrd( int arr[], int n, int k){
        for(int i=0;i<n;i++){
            min_heap.push(arr[i]);
             if(min_heap.size()>k){
                 ans.push_back(min_heap.top());
                  min_heap.pop();
             } 
        }
        while(min_heap.size()>0){
            ans.push_back(min_heap.top());
          
              min_heap.pop();
         } 
         
         for ( int i = 0; i <ans.size(); i++)
         {
             cout<<ans[i]<<" ";
         }
          cout<<endl;
         
 }
 int main(){
// code hear
 int arr[]={6,5,3,2,8,10,9};
       int n=7;
        int k=3;
     nearSortrd(arr,n,k);
     
 return 0;
}