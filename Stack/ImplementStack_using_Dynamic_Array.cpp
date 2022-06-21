#include <bits/stdc++.h>
using namespace std;
class ImplementStack_using_Dynamic_Array
{
private:
    int top;
    int *arr;
    int capacity;

public:
    ImplementStack_using_Dynamic_Array()
    {
        top = 0;
        capacity = 5;
        arr = new int[capacity];
    }

    void push(int data)
    {
        if (top == capacity)
        {
            // crating  the array of  double
            int *newarr = new int[capacity * 2];
            // copy the data from arr to newarry
            for (int i = 0; i < capacity; i++)
            {
                newarr[i] = arr[i];
            }
            capacity = capacity * 2; // we simply double the capacity value;
            delete[] arr;            // deleting previos array ;
            arr = newarr;            // now arr pointer  pointing newarray
        }
        arr[top] = data;
        top++;
    }
    bool empty()
    {

        return top == 0;
    }

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
};

int main()
{
    // code hear
    ImplementStack_using_Dynamic_Array s;
    for (int i = 20; i < 30; i++)
    {
        s.push(i);
    }
    while (!s.empty())
    {
        cout << "Removed Element is: " << s.pop() << endl;
    }

    cout << "Is stack empty (y/n): " << s.empty() << endl;

    return 0;
}