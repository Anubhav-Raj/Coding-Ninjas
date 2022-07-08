#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Queue
{
    T *data;
    int size;
    int firstindex;
    int nextIndex;
    int capacity;

public:
    // Constructer
    Queue(int size)
    {
        data = new T[size];
        capacity = size;
        this->size = 0;
        firstindex = -1;
        nextIndex = 0;
    }
    // Retur queuq size
    int size1()
    {
        return size;
    }
    // Return Queue is empty or Not
    bool isEmpty()
    {
        return size == 0;
    }

    // Insert Element into Queue
    void enqueue(T element)
    {

        if (size != capacity)
        {
            data[nextIndex] = element;
            nextIndex = (nextIndex + 1) % capacity;//  increse the firstindex by one, and when reach  last index of array and size!== capacity  then firstindex to 0 index;
            size++;
        }
        else
        {
            cout << "Queue is Full" << endl;
            return;
        }

        // only first time run
        if (firstindex == -1)
        {
            firstindex = 0;
        }
    }

    // Remove element From Queue
    T dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is Full" << endl;
            return 0;
        }
        else
        {
            T element = data[firstindex];
            firstindex = (firstindex + 1) % capacity;//  increse the firstindex by one, and when reach  last index of array and size!== capacity  then firstindex to 0 index;
            size--;
             if(size==0){
                 firstindex=-1;
                 nextIndex=0;
             }
            return element;
        }
    }
    // Retuen  Front End
    T front()
    {
        if (isEmpty())
        {
            cout << "Queue is Full";
            return 0;
        }
        else
        {
            return data[firstindex];
        }
    }
};

int main()
{
    // code hear
    Queue<char> q1(5);
    q1.enqueue(65);
    q1.enqueue(66);
    q1.enqueue(67);
    cout << q1.dequeue() << " ";
    cout << q1.dequeue() << " ";
    q1.enqueue(68);
    q1.enqueue(69);
    q1.enqueue(65);
    q1.enqueue(71);
    cout << q1.dequeue() << " ";
    cout << q1.dequeue() << " ";
    cout << q1.dequeue() << " ";
    q1.enqueue(100);
    cout << endl << "Front Element is : " << q1.front();
    cout << endl  << "Queue size is " << q1.size1();
    cout << endl<< " IS Queue Empty " << q1.isEmpty();
    return 0;
}