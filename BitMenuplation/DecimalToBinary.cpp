#include <bits/stdc++.h>
using namespace std;
 int binary(int n){
       int i=1;
       int  ans=0;
       while(n>0){
         int last_bit = n&1;
          ans+= last_bit *i;
          i=i*10;
          n= n>>1;
       }
        return ans;
 }
 int main(){
// code hear
      cout<<binary(15)<<endl;
 return 0;
}