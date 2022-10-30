#include <bits/stdc++.h>
using namespace std;
 vector<int> firstNegativeNumber(int arr[], int n, int k){
     int window_start=0,window_end=0;
         queue<int> q;
          vector<int> ans;
        while(window_end < n){

              if(arr[window_end]<0){
                 q.push(arr[window_end]);
              }

               if((window_end-window_start+1) <k){
                  window_end++;
               } else if( (window_end-window_start +1) ==k){
                      if(q.empty()){
                         ans.push_back(0);
                      } else{
                             ans.push_back(q.front());
                              if(arr[window_start]==q.front()){
                                 q.pop();
                              } 
                      }
                    window_end++;
                    window_start++;
                }
        } 
         return ans;
 }
 int main(){
// code hear
 
   int arr[]={12,-1,-7,8,-15,30,16,28};
    int n=8;
     int k=3;
  vector<int> v= firstNegativeNumber(arr,n,k);
   for( int i=0; i<v.size();i++){
     cout<<v[i]<<" ";
   }
     cout<<endl;
     
 return 0;
}