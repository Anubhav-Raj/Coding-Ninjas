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
Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *small_ans = reverse(head->next);
    Node *tail = head->next;
    tail->next = head;
    head->next = NULL;
    return small_ans;
}

// Function to add two numbers represented by linked list.
 Node *addTwoLists(struct Node *l1, struct Node *l2)
{
    // code here
    l1 = reverse(l1);
    l2 = reverse(l2);
    Node *dummy = new Node(-1); // Creating a dummy node;
    Node *temp = dummy;
    int carray = 0;

    while (l1 != NULL || l2 != NULL || carray)
    {
        int sum = 0;
        if (l1 != NULL)
        {
            sum = l1->data;
            l1 = l1->next;
        }
        if (l2 != NULL)
        {
            sum += l2->data;
            l2 = l2->next;
        }
        sum = sum + carray;
        carray = sum / 10;
        Node *newNode = new Node(sum % 10);
        temp->next = newNode;
        temp = temp->next;
    }
    return reverse(dummy->next);
}
int main()
{
    // code hear
    Node *n1 = new Node(0);
    Node *head = n1;
    Node *n2 = new Node(1);
    Node *n3 = new Node(2);
    Node *n4 = new Node(3);
    Node *n5 = new Node(4);
    Node *n6 = new Node(5);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;

    return 0;
}