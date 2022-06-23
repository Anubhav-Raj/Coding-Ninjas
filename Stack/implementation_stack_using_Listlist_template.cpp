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
        next = NULL;
    }
};
template <typename T>
class stack_using_linkList
{
    Node<T> *head;
    int size;

public:
    stack_using_linkList()
    {
        head = NULL;
        size = 0;
    }
    int getSize()
    {
        return size;
    }
    bool isempty()
    {
        return size == 0;
    }
    void push(T data)
    {
        Node<T> *newNode = new Node<T>(data);

        newNode->next = head;
        head = newNode;

        size++;
    }
    T pop()
    {
        if (isempty())
        {
            return 0;
        }
        T ans = head->data;
        Node<T> *temp = head;
        head = head->next;
        size--;
        delete (temp);
        return ans;
    }
    void print()
    {
        Node<T> *tempPointer = head;
        while (tempPointer != NULL)
        {
            cout << tempPointer->data << " ";
            tempPointer = tempPointer->next;
        }
         cout<<endl;
    }
    T top1()
    {
        if (isempty())
        {
            return 0;
        }
        return head->data;
    }
};
int main()
{
    // code hear
    stack_using_linkList<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
    s1.push(70);
    s1.push(80);

    s1.print();
    s1.pop();
    s1.pop();
    s1.pop();
     s1.print();
    
    cout << "IS stack empty (y/N) " <<s1.isempty() << endl;
    cout << "Stack size is " << s1.getSize() << endl;
    cout << "Stack top element is " << s1.top1() << endl;

    return 0;
}