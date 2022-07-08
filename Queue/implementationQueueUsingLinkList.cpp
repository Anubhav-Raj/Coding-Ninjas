#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

template <typename T>
class QueueUsingLinkList
{
    Node<T> *head;
    Node<T> *tail;
    int size;

public:
    QueueUsingLinkList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        return size == 0;
    }

    void enqueue(T element)
    {
        Node<T> *newNode = new Node<T>(element);
        if (head == NULL && tail == NULL)
        {
            head = newNode;
            tail = newNode;
        } else{
        tail->next = newNode;
        tail = newNode;
        }
        size++;
    }
    T deqeueu()
    {
         
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return 0;
        }
        Node<T> *temp = head;
        T ans = head->data;
        head = head->next;
        delete (temp);
        size--;
        return ans;
    }
     T front(){
         if(head==NULL){
               cout << "Queue is Empty" << endl;
              return 0;
         } 
         return head->data;
     }
};
int main()
{
    QueueUsingLinkList<int> q1;

    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    q1.enqueue(60);
    cout<<" Front Element "<< q1.front()<<endl;
    cout << q1.deqeueu() << " ";
    cout << q1.deqeueu() << " ";
    cout << q1.deqeueu() << " ";

    cout<<endl<< "Size :"<<q1.getSize();
    cout<<endl<<" is Empty "<< q1.isEmpty();

    return 0;
}