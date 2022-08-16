#include <bits/stdc++.h>
using namespace std;
//
    vector<int> nextGreaterToRigth(vector<int>& nums2) {
        
         stack<int>st;
         vector<int> next_greater;
         
          for( int  i= nums2.size()-1;i>=0;i--){
              
              
                if(st.size()==0){
                     next_greater.push_back(-1);

                } 
              
              else  if( !st.empty() && nums2[i]<st.top()){
                    next_greater.push_back(st.top());
                   
               }
             else  if(!st.empty() && nums2[i]>st.top()){
                    
                     while(!st.empty() && st.top()<=nums2[i]){
                         st.pop();
                     }
                      if(st.empty()){
                         next_greater.push_back(-1);
                      } else{
                            next_greater.push_back(st.top());
                      }
                    
                }
              st.push(nums2[i]);
                
          }
           reverse(next_greater.begin(),next_greater.end());
        
         return next_greater;
    }
     vector<int> nextGreaterToLeft(vector<int>& nums2) {
        
         stack<int>st;
         vector<int> next_greater;
         
          for( int  i= 0;i<nums2.size();i++){
              
              
                if(st.size()==0){
                     next_greater.push_back(-1);

                } 
              
              else  if( !st.empty() && nums2[i]<st.top()){
                    next_greater.push_back(st.top());
                   
               }
             else  if(!st.empty() && nums2[i]>st.top()){
                    
                     while(!st.empty() && st.top()<=nums2[i]){
                         st.pop();
                     }
                      if(st.empty()){
                         next_greater.push_back(-1);
                      } else{
                            next_greater.push_back(st.top());
                      }
                    
                }
              st.push(nums2[i]);
                
          }
          // reverse(next_greater.begin(),next_greater.end());
        
         return next_greater;
    }


      vector<int> nearestSmallestToLeft(vector<int>& nums2) {
        
         stack<int>st;
         vector<int> next_greater;
         
          for( int  i= 0;i<nums2.size();i++){
              
              
                if(st.size()==0){
                     next_greater.push_back(-1);

                } 
              
              else  if( !st.empty() && nums2[i]>st.top()){
                    next_greater.push_back(st.top());
                   
               }
             else  if(!st.empty() && nums2[i]<st.top()){
                    
                     while(!st.empty() && st.top()>=nums2[i]){
                         st.pop();
                     }
                      if(st.empty()){
                         next_greater.push_back(-1);
                      } else{
                            next_greater.push_back(st.top());
                      }
                    
                }
              st.push(nums2[i]);
                
          }
          
           reverse(next_greater.begin(),next_greater.end());
        
         return next_greater;
    }


      vector<int> nerestSmallestToRight(vector<int>& nums2) {
        
         stack<int>st;
         vector<int> next_greater;
         
          for( int  i= nums2.size()-1;i>=0;i--){
              
              
                if(st.size()==0){
                     next_greater.push_back(-1);

                } 
              
              else  if( !st.empty() && nums2[i]>st.top()){
                    next_greater.push_back(st.top());
                   
               }
             else  if(!st.empty() && nums2[i]<st.top()){
                    
                     while(!st.empty() && st.top()>=nums2[i]){
                         st.pop();
                     }
                      if(st.empty()){
                         next_greater.push_back(-1);
                      } else{
                            next_greater.push_back(st.top());
                      }
                    
                }
              st.push(nums2[i]);
                
          }
           reverse(next_greater.begin(),next_greater.end());
         return next_greater;
    }
 int main(){
// code hear 
vector<int> v;
 v.push_back(1);
 v.push_back(3);
 v.push_back(2);
 v.push_back(4);
  
   //vector<int>ans = nextGreaterToLeft(v);  
   //vector<int>ans = nextGreaterToRigth(v);
   //  vector<int>ans = nerestSmallestToLeft(v);   
     vector<int>ans = nerestSmallestToRight(v);

    for( int  i=0; i<ans.size();i++){
       cout<<ans[i] <<" ";
    }
 
     
 return 0;
}