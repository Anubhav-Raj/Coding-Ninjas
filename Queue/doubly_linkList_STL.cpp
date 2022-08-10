#include <bits/stdc++.h>
using namespace std;
int main()
{
    // code hear
    deque<int> q;
    q.push_front(10);
    q.push_back(12);


    cout << q.front() << endl;
    cout << q.back() << endl;

    q.pop_front();
    q.pop_back()

       if(q.empty()){
         cout<<"Queue is Empty"<<endl;
       } else{
         cout<<"Queue is not Empty"<<endl;
       }

    return 0;
}