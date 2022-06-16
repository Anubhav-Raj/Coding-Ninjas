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
        cout << tempPointer->data << "->"; // prining the  date of node
        tempPointer = tempPointer->next;   //  updating the  value  of head
    }
}
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
Node *middle(Node *head)
{
    if (head == NULL || head->next == NULL) // list is empty or one node in list
    {
        return head;
    }
    Node *fast = head->next;
    Node *slow = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;       // it  will move one step forward
        fast = fast->next->next; //  it will teo step  forward
    }
    return slow;
}
Node *merge_sort(Node *head)
{
    // Base Case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    // finding  mid
    Node *mid = middle(head);

    Node *one_half = head;
    Node *second_half = mid->next;
    mid->next = NULL;

    // Recursive Call to Sort Both Halves
    one_half = merge_sort(one_half);
    second_half = merge_sort(second_half);

    // Merge both   one_half  and Second_half
    Node *f_head = merge(one_half, second_half);
    return f_head;
}

int main()
{
    // code hear
    Node *n1 = new Node(10);
    Node *head = n1;
    Node *n2 = new Node(16);
    Node *n3 = new Node(4);
    Node *n4 = new Node(3);
    Node *n5 = new Node(1);
    Node *n6 = new Node(30);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    Node *f_head = merge_sort(head);
    print(f_head);
    return 0;
}