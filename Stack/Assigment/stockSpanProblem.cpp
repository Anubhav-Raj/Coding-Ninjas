#include <bits/stdc++.h>
using namespace std;

     vector<int> stockSpanProblem(int price[],int n) {
        
         stack<pair<int,int>>st;
         vector<int> Smaller_price_day;
          vector<int> res;
         
          for( int  i= 0;i<n;i++){
               
              
                if(st.size()==0){
                      
                     Smaller_price_day.push_back(-1);

                } 
              
              else  if(!st.empty() && price[i]<st.top().first){
                    Smaller_price_day.push_back(st.top().second);
                   
               }
             else  if(!st.empty() && price[i]>st.top().first){
                    
                     while(!st.empty() && st.top().first<=price[i]){
                         st.pop();
                     }
                      if(st.size()==0){
                        Smaller_price_day.push_back(-1);
                      } else{
                            Smaller_price_day.push_back(st.top().second);
                      }
                    
                }
              st.push({price[i],i}); // pushing pair 
                
          }
          
           for(int i=0; i<Smaller_price_day.size();i++){
               cout<<i-Smaller_price_day[i]<<" ";
                 res.push_back(i-Smaller_price_day[i]);
           }
        
         return  res;
    }

 
 int main(){
// code hear 
vector<int> v;
 v.push_back(100);
 v.push_back(80);
 v.push_back(60);
 v.push_back(70);
  v.push_back(60);
   v.push_back(75);
    v.push_back(85);
  
 
     
     int n;
      cin>>n;
       int arr[n];
        for( int i=0;i<n;i++){
             
         cin>>arr[i];
        }
        vector<int>ans = stockSpanProblem(arr,n);

    for( int  i=0; i<ans.size();i++){
      // cout<<ans[i] <<" ";
    }
 
     
 return 0;
}
 
