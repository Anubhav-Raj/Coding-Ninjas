#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    queue<int> q1;
    queue<int> q2;
 
   bool isEmpty(){
       return q1.empty();
   }

    void add( int data){
        if(q2.empty()){
             q2.push(data);
        }
           while(!q1.empty()){
               q2.push(q1.front());
                q1.pop();
           }
           while(!q2.empty()){
               q1.push(q2.front());
                q2.pop();
           } 

    }

     int remove(){
         if(q1.empty()){
                return -1;
         }
         int data = q1.front();
          q1.pop();
           return data;
     }
      int  top(){
         if(q1.empty()){
             return -1;
         }
          return q1.front();
      }
     

}; 
int main()
{
    // code hear
     Stack s;
     s.add(10);
      s.add(20);
       s.add(30);
        s.add(40);

         while(!s.isEmpty()){
             cout<<s.remove()<<" ";
         }
    return 0;
}