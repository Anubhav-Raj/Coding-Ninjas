#include <bits/stdc++.h>
using namespace std;
template <typename T>
class QueueDynamically
{
private:
    T *data;
    int size;
    int firstIndex;
    int nextIndex;
    int capacity;

public:
    QueueDynamically()
    {
        data = new T[4];
        firstIndex = -1;
        nextIndex = 0;
        size = 0;
        capacity = 4;
    }
    void enqueue(T element)
    {

           // only first time run
        if (firstIndex == -1)
        {
            firstIndex = 0;
        }
        if (size == capacity)
        {
            T *newData = new T[2 * capacity];
            int j = 0;
            for (int i = firstIndex; i < capacity; i++)
            {
                newData[j] = data[i];
                j++;
            }
            for (int i = 0; i < firstIndex; i++)
            {
                newData[j] = data[i];
                j++;
            }
            delete[] data;
            firstIndex = 0;
            nextIndex = capacity;
            capacity *= 2;
            data = newData;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity;
        size++;
    }
    // Return Queue is empty or Not
    bool isEmpty()
    {
        return size == 0;
    }

    // Remove element From Queue
    T dequeue()
    {
        
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return 0;
        }
        else
        {
            T element = data[firstIndex];
            firstIndex = (firstIndex + 1) % capacity; //  increse the firstindex by one, and when reach  last index of array and size!== capacity  then firstindex to 0 index;
            size--;
            if (size == 0)
            {
                firstIndex = -1;
                nextIndex = 0;
            }
            cout << element << " ";
            return element;
        }
    }
};

int main()
{
    // code hear
    QueueDynamically<int> q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    q1.enqueue(60);
    q1.enqueue(70);
    q1.enqueue(80);
    q1.enqueue(90);
    q1.enqueue(100);
    q1.enqueue(110);
    q1.enqueue(120);
    q1.enqueue(11);
    q1.enqueue(12);
    q1.enqueue(13);
    q1.enqueue(14);
    q1.enqueue(15);
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();

    return 0;
}