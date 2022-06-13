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
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void Increment(Node *head)
{
    while (head != NULL)
    {
        head->data++;
        head = head->next;
    }
}
int main()
{
    // code hear
    Node *N1 = new Node(10);
    Node *head = N1;
    Node *N2 = new Node(20);
    N1->next = N2;
    Increment(head);
     print(head);

    return 0;
}