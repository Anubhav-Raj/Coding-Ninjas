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
void print(Node *head)
{
    Node *tempPointer = head; // we dont want to lost address of  head pointer
    while (tempPointer != NULL)
    {
        cout << tempPointer->data << "->"; // prining the  date o  f node
        tempPointer = tempPointer->next;   //  updating the  value  of head
    }
}

Node *Insert_Node(Node *head, int index, int data)
{
    Node *newNode = new Node(data); // creating node with degire data
    Node *temp = head;
    int count = 1;
    if (index == 1)//handling the situation  when we want to store data  first postion of node
    {
        newNode->next = head;
        head = newNode;
        return head;
    }

    while (temp != NULL && count < index - 1) // go to  index-1 node
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {
        newNode->next = temp->next;
        temp->next = newNode;
    }
      return head;
}
int main()
{
    // code hear
    Node *n1 = new Node(10);
    Node *head = n1;
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    Node *n5 = new Node(50);
    Node *n6 = new Node(60);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    head = Insert_Node(head, 7, 100);
    print(head);
    return 0;
}