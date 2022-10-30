#include <bits/stdc++.h>
using namespace std;
 int pickToy(string s){
     int n= s.length();
      int i=0,j=0;
       int cnt = INT_MIN;
       unordered_map<char,int> mp;
        while(j<n){
               mp[s[j]]++;
                 if(mp.size()<2){
                     cnt= max( cnt,(j-i+1));
                     j++;
                 } else if( mp.size()==2){
                     cnt= max( cnt,(j-i+1));
                     j++;
                 } else if(mp.size()>2){
                     while(mp.size()>2){
                          mp[s[i]]--;
                           if(mp[s[i]]==0){
                             mp.erase(s[i]);
                           }
                            i++;
                     }
                        j++;
                 }
               
        }
         return cnt;
 }
 int main(){
// code hear
 string  str="abaccab";
  cout<<pickToy(str)<<endl;
     
 return 0;
}