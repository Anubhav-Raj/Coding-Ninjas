#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    // Crearing  stack using STL
    stack<int> s;

    // insertion  in stack
    s.push(10);
    s.push(20);


    // remove element from the stack
    s.pop();
   
   //to see top element
    cout<<" top element of stack "<<s.top()<<endl;

    // is stack empty
     if(s.empty()){
         cout<<" yes it is empty"<<endl;
     } else{
         cout<<"No ! it is not empty"<<endl;
     }

     // size of stack
      cout<<"size of stack is "<<s.size()<<endl;



    
    return 0;
}