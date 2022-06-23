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
Node *merge(Node *head1, Node *head2)
{
    Node *f_head = NULL;
    Node *f_tail = NULL;
    if (head1 == NULL && head2 == NULL)
    {
        return f_head;
    }


    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data < head2->data)
        {
            if (f_head == NULL)
            {
                f_head = head1;
                f_tail = head1;
            }
            else
            {
                f_tail->next = head1;
                f_tail = head1;
              
            }
              head1 = head1->next;
        }
        else
        {
              if (f_head == NULL)
            {
                f_head = head2;
                f_tail = head2;
            }
          
            else
            {
                f_tail->next = head2;
                f_tail = head2;
               
            }
             head2 = head2->next;
        }
    }
    if (head1 != NULL)
    {
         
        f_tail->next = head1;
    }
    if (head2 != NULL)
    {
        f_tail->next = head2;
    }
    return f_head;
}
void print(Node *head)
{
    Node *tempPointer = head; // we dont want to lost address of  head pointer
    while (tempPointer != NULL)
    {
        cout << tempPointer->data << "->"; // prining the  date o  f node
        tempPointer = tempPointer->next;   //  updating the  value  of head
    }
}
int main()
{
    // code hear
    Node *n1 = new Node(1);
    Node *head1 = n1;
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);

    Node *n4 = new Node(4);
    Node *n5 = new Node(15);
    Node *n6 = new Node(30);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;

    Node *n7 = new Node(7);
    Node *head2 = n7;
    Node *n8 = new Node(8);
    Node *n9 = new Node(9);

    Node *n10 = new Node(25);
    Node *n11 = new Node(28);
    Node *n12 = new Node(37);
    n7->next = n8;
    n8->next = n9;
    n9->next = n10;
    n10->next = n11;
    n11->next = n12;
    Node *f_head = merge(head1, head2);
    print(f_head);

    return 0;
}