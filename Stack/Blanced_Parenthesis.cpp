#include <bits/stdc++.h>
using namespace std;
 int main(){
// code hear
     
 string str;
  cin>>str;
   stack<char> s;
     for(int i=0;i<str.length();i++){
         if(str[i]=='{' || str[i]== '[' || str[i] =='('){
             s.push(str[i]);
         }
          if(str[i]=='}'|| str[i]==']'|| str[i]==')'){
              if(s.top()==str[i]){
                 s.pop();
              } else{
                  cout<<"Not Blanced";
                   return 0;
              }
          }
     }
      if(s.empty()){
      cout<<"Blanced "<<endl;
      } else{
         cout<<"Not Blanced";
      }
   
 return 0;
}