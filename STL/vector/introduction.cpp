#include <bits/stdc++.h>
using namespace std;
 int main(){
// code hear


    // creating  vector dynamically
     vector<int> *vt= new vector<int> (); 
     vector<int> v;
  for(int i=0;i<100;i++){
      cout<<"capacity: "<<v.capacity()<<endl;
       cout<<"Size: "<<v.size()<<endl<<endl;
         v.push_back(i+1);
  }

     // alway use push_back() frunction to push element in  vector  Don't use  []
      v.push_back(10);
      v.push_back(30);
       v.push_back(20);

        v.at(1);
        v.at(2);

 return 0;
}