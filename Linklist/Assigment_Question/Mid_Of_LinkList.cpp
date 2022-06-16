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
Node *middle(Node *head)
{
    if (head == NULL || head->next == NULL) //   list is empty or one node in list
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
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    Node *mid = middle(head);
    cout << mid->data << endl;

    return 0;
}