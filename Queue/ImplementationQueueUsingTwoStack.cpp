#include <bits/stdc++.h>
using namespace std;
class Queue
{ public:
    stack<int> s1;
    stack<int> s2;
     
   void add( int data){
       if(s1.empty()){
           s1.push(data);
       } else{
           
             while (!s1.empty())
             {
                  s2.push(s1.top());
                   s1.pop();
             }
              s1.push(data);
               while(!s2.empty()){
                 s1.push(s2.top());
                  s2.pop();
               }
       }
   }
    
     int pop(){
         if(s1.empty()){
             return -1;
         }
           int data= s1.top();
            s1.pop();
             return data;
     }
      int  front(){
         if( s1.empty())
             return -1;
       
           return s1.top();
      }
       bool  isEmpty(){
            return s1.empty();
       }
};

 int main()
{
    // code hear
       Queue q1;
        q1.add(10);
        q1.add(20);
        q1.add(30);
        q1.add(40);
        q1.add(50);

    while (!q1.isEmpty())
    {
        cout<<q1.pop()<<" ";
    }
    
      
    return 0;
}