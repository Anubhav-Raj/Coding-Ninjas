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
    Node *tempPointer = head;
    while (tempPointer != NULL)
    {
        cout << tempPointer->data << " ";
        tempPointer = tempPointer->next;
    }
    cout << endl;
}
Node *delete_Node(Node *head, int index)
{
    if (head == NULL)
    {
        return head;
    }

    Node *temp = head;
    Node *prevoios;
    int count = 1;
    if (index == 1)
    {
        head = temp->next;
        delete temp;
        return head;
    }
    while (temp != NULL && count < index)
    {
        prevoios = temp;
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {

        prevoios->next = temp->next;
        delete temp;
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
    print(head);
    head = delete_Node(head, 4);
    print(head);

    return 0;
}