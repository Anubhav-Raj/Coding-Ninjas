#include <bits/stdc++.h>
using namespace std;
 template <typename T>
class ImplementStack_using_Dynamic_Array
{
private:
    int top;
    T *arr;
    int capacity;

public:
    ImplementStack_using_Dynamic_Array()
    {
        top = 0;
        capacity = 5;
        arr = new  T[capacity];
    }

    void push(T data)
    {
        if (top == capacity)
        {
            // crating  the array of  double
            T *newarr = new T[capacity * 2];
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

    T pop()
    {
        if (empty())
        {
            cout << "Stack UnderFlow" << endl;
            return 0;
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
    ImplementStack_using_Dynamic_Array<char> s;
    for (int i = 65; i < 91; i++)
    {
        s.push(i);
    }
    while (!s.empty())
    {
        cout  << s.pop() << " ";
    }

    cout<<endl << "Is stack empty (y/n): " << s.empty() << endl;

    return 0;
}