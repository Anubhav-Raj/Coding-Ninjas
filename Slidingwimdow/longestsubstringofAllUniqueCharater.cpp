class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     
         int i=0, j=0;
         map<char,int> mp;
         int cnt=0;
         while(j<s.length()){
             
             // calculation
              mp[s[j]]++;
              
              if(mp.size()== (j-i+1)){
                   cnt= max( cnt, (j-i+1));
              } else  if( mp.size()< (j-i+1)){
                   while( mp.size()<(j-i+1)){
                        mp[s[i]]--;
                        if( mp[s[i]]==0){
                             mp.erase(s[i]);
                        }
                        i++;
                   }
                  
              }
              j++;
             
         }
         return cnt;
        
        
    }
};