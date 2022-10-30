class LogestSubStringWithKuniueCharecters{

 public:
  int longestKSubstr(string s, int k) {
    // your code here
      int i=0,j=0;
       int cnt=-1;
     map<char,int> mp;
          int n=s.length();
           while(j<n){
              //calculation
              mp[s[j]]++;
              
               if( mp.size()<k){
                    j++;
               } else if( mp.size()==k){
                   
                    cnt= max(cnt, (j-i+1));
                    j++;
               } else if(mp.size()>k){
                   
                    while(mp.size()>k){
                        
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
};


