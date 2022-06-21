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
Node *seprate(Node *head)
{
    Node *odd_head = NULL, *odd_tail = NULL, *even_tail = NULL, *even_head = NULL, *temp = head;
    if (head == NULL)
    {
        return head;
    }
    while (temp != NULL)
    {
        if (temp->data % 2 == 0)
        {
            if (even_head == NULL)
            {
                even_head = temp;
                even_tail = temp;
            }
            else
            {
                even_tail->next = temp;
                even_tail = temp;
            }
        }
        else
        {
            if (odd_head == NULL)
            {
                odd_head = temp;
                odd_tail = temp;
            }
            else
            {
                odd_tail->next = temp;
                odd_tail = temp;
            }
        }
        temp = temp->next;
    }
    if (odd_head == NULL)
    {
        return even_head;
    }
    else
    {
        if (even_head == NULL)
        {
            return odd_head;
        }
        else
        {
            odd_tail->next = even_head;
            even_tail->next=NULL;
            head = odd_head;
            return head;
        }
    }
}

int main()
{
    // code hear
    Node *n1 = new Node(1);
    Node *head = n1;
    Node *n2 = new Node(11);
    Node *n3 = new Node(3);
    Node *n4 = new Node(6);
    Node *n5 = new Node(8);
    Node *n6 = new Node(0);
    Node *n7 = new Node(9);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = n7;
    head = seprate(head);
    print(head);
    return 0;
}