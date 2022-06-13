#include <bits/stdc++.h>
using namespace std;
 int main(){
// code hear
       vector <int> v1 { 0,3,0,2,0};
      int s=0;
       int i=0;
       int e= v1.size()-1;
        while(s<=e){
            if(v1[s]==0){
                swap(v1[s],v1[s+1]);
                s++;
            } else{
                 s++;
            }
        }
         for (int i : v1)
    {
        cout << i << " ";
    }
         
 return 0;
}