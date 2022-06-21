#include <bits/stdc++.h>
using namespace std;
class StackUsingArray
{
    int *arr;
    int top;
    int capacity;

public:
    // Constructer
    StackUsingArray(int size)
    {
        arr = new int[size];
        top = 0;
        capacity = size;
    }

    // Finding size of stack
    int size()
    {
        return top;
    }
    //  is stack is empty
    bool empty()
    {
        /* if(top<=0){
               return -1
          } else{
              return 1;
          }
        */
        // both are same
        return top == 0;
    }

    // insert  element into stack
    void push(int data)
    {
        if (top != capacity)
        {

            arr[top] = data;
            top++;
        }
        else
        {
            cout << "stack OverFlow" << endl;
             return;
        }
    }

    // Revmoving element from the top
    int pop()
    {
        if (empty())
        {
            cout << "Stack UnderFlow" << endl;
            return INT_MIN;
        }
        else
        {
            top--;
            return arr[top];
        }
    }

    // to see the top most element
    int top1()
    {
        if (empty())
        {
            cout << "Stack UnderFlow";
            return INT_MIN;
        }
        else
        {
            return arr[top - 1];
        }
    }
};

int main()
{
    // code hear
    StackUsingArray s(6);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(10);
    s.push(20);
    s.push(30);


    cout<<"Top Element of stack: " << s.top1() << endl;

    cout <<"Removed Element is: " << s.pop() << endl;
     cout <<"Removed Element is: " << s.pop() << endl;
      cout <<"Removed Element is: " << s.pop() << endl;
    
    cout<<"Total Size of Elemrnt :"<< s.size() << endl;
    
    cout<<"Is stack empty (y/n): " << s.empty() << endl;

    return 0;
}