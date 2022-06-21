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
        cout << tempPointer->data << "->";
        tempPointer = tempPointer->next;
    }
    cout << endl;
}
Node *delete_n_node(Node *head, int m, int n)
{
    if (head == NULL)
    {
        return head;
    }
    if (head->next == NULL)
    {
        return head;
    }
    if (m == 0)
    {
        return NULL;
    }

    if (n == 0)
    {
        return head;
    }

    Node *t1 = head;
    Node *t2 = NULL;

    while (t1 != NULL)
    {

       
        for ( int i = 1; i < m && t1 != NULL; i++)
        {
            t1 = t1->next;
            if (t1 == NULL)
            {
                return head;
            }
        }
        t2 = t1->next;
        for ( int i = 1; i <= n && t2 != NULL; i++)
        {
            Node *temp = t2;
            t2 = t2->next;
            delete (temp);
        }
        t1->next = t2;
        t1 = t2;
    }
    return head;
}

int main()
{
    // code hear
    Node *n1 = new Node(1);
    Node *head = n1;
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);
    Node *n6 = new Node(6);
    Node *n7 = new Node(7);
    Node *n8 = new Node(8);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = n7;
    n7->next = n8;
    head = delete_n_node(head, 2, 2);
    print(head);
    return 0;
}