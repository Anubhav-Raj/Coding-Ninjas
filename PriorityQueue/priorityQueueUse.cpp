#include <bits/stdc++.h>
#include "PriorityQueue.cpp"
using namespace std;

 int main(){
// code hear
  PriorityQueue1 p;
   p.insert(100);
   p.insert(10);
   p.insert(15);
   p.insert(4);
   p.insert(17);
   p.insert(21);
   p.insert(67);

    cout<<p.getSize()<<endl;
    cout<<p.getMin()<<endl;

        while (!p.isEmpty())
        {
            cout<<p.remove()<<" ";
        }
         cout<<endl;
        
     
 return 0;
}