#include<bits/stdc++.h>

using namespace std;

bool isPowerOfFour(int n) {
    
     int cnt=0;
     for( int i=0;i<32;i++){
         
          if( ((n>>i)&1) !=0){
               
                cnt++;
                 if(i%2==1){
                      return false;
                 }
          }
     }
      if(cnt==1){
           return  true;
      }
}