#include <bits/stdc++.h>
using namespace std;
//#include "Node.cpp"
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

class Pair
{
public:
    Node *head;
    Node *tail;
};
void print(Node *head)
{
    Node *tempPointer = head;
    while (tempPointer != NULL)
    {
        cout << tempPointer->data << "->";
        tempPointer = tempPointer->next;
    }
     cout<<endl;
}

Pair reverseLL_2(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        Pair res;
        res.head = head;
        res.tail = head;
        return res;
    }
    Pair smallAns = reverseLL_2(head->next);
    smallAns.tail->next = head;
    head->next = NULL;

    Pair f_ans;
    f_ans.head = smallAns.head;
    f_ans.tail = head;
    return f_ans;
}
Node *reverseLL_Batter(Node *head)
{
    return reverseLL_2(head).head;
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
    print(head);
    head = reverseLL_Batter(head);
    print(head);
    return 0;
}