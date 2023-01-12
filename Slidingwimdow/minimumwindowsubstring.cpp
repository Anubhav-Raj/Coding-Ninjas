#include <bits/stdc++.h>
using namespace std;
 int minWindow(string s, string t) {
     if(s.length()<t.length()){
         return -1;
     }
          unordered_map<char,int> mp;
          unordered_map<int,int>  result;
         for(int i=0;i<t.length();i++){
              mp[t[i]]++;
         }
         int count= mp.size();
         int i=0,j=0;
         int  ans= INT_MAX;
         while(j<s.length()){
                
                   if(mp.find(s[j])!=mp.end()){
                    mp[s[j]]--;
                   if(mp[s[j]]==0){
                         count--;
                    }
                 }       
               while(count==0){
                  ans= min(ans,(j-i+1));

                  if(result.find(ans) == result.end())
                      result[ans] = i; // Storing the minimum size of the window and initial index of string window

                    if((mp.find(s[i])!=mp.end())){
                         
                         mp[s[i]]++;
                         if(mp[s[i]]==1){
                             count++;
                         }

                      } 
                        
                          i++;
                     }
                     j++;
              }
            
             string sp ="";
               for( int k= result[ans]; k<j; k++){
                 sp.push_back(s[k]);
               }
                cout<<sp<<endl;;
          return ans;
    }
 int main(){
// code hear
      string s="ADOBECODEBANC";
      string p="";
    cout<< minWindow(s,p);
 return 0;
}