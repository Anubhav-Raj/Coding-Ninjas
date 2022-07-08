#include <iostream>
#include<queue>
using namespace std;
 int main(){
// code hear
      queue<int> q1;
       q1.push(10);
       q1.push(20);
       q1.push(30);
       q1.push(40);
       q1.push(50);

        cout<<q1.front()<<endl;
         while(!q1.empty()){
             cout<<q1.front()<<" ";
              q1.pop();
         } cout<< endl;
          cout<< q1.size()<<endl;
           cout<<q1.empty()<<endl;
 return 0;
}