#include <bits/stdc++.h>
using namespace std;
priority_queue<int> max_heap;
int kthSmallestElement( int arr[],  int n, int k){
            
             for( int i=0;i<n;i++){
                max_heap.push(arr[i]);
                 if( max_heap.size()>k){
                     max_heap.pop();
                 }

             }
              return max_heap.top();
  }
 int main(){
// code hear
     
      int arr[]={7,10,4,3,20,15};
       int n=6;
        int k=1;
         cout<<k<<"th smallest Element is: "<<kthSmallestElement(arr,n,k);

 return 0;
}