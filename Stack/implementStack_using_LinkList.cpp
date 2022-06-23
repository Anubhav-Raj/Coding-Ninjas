#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Stack_class
{
public:
    Node *top = NULL;
    void push(int data)
    {
        Node *newNode = new Node(data);
        if (top == NULL)
        {
            top = newNode;
        }
        else
        {
            newNode->next = top;
            top = newNode;
        }
    }
    int pop()
    {
        if (top == NULL)
        {
            cout << "Stack UnderFlow" << endl;
            return INT_MIN;
        }
        else
        {
            Node *temp = top;
            top = top->next;
            return temp->data;
        }
    }

    int size()
    {
        int count = 0;
        Node *temp = top;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
    bool empty()
    {
        if (top == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int top1()
    {
        if (top != NULL)
        {
            return top->data;
        }
        return 0;
    }
    void print()
    {
        Node *tempPointer = top;
        while (tempPointer != NULL)
        {
            cout << tempPointer->data << "->";
            tempPointer = tempPointer->next;
        }
        cout <<endl;
    }
};

int main()
{
    // code hear
    Stack_class s;

    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);

    cout << "Now the List is: "; s.print();
    cout << " Removed data is " << s.pop() << endl;
    cout << "Removed data is " << s.pop() << endl;
    cout << "Remaing list is :"; s.print() ;

    cout << "Your Stack size is " << s.size() << endl;

    cout << "Is stack empty: " << s.empty() << endl;

    cout << "top Element of stack " << s.top1() << endl;

    return 0;
}