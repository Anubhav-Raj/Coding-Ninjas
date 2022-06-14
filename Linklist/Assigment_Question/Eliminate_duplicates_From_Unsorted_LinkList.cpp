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
    cout << endl;
}

// Apporch 1
void *remove_Duplicate1(Node *head)
{

    Node *curr = head;
    Node *delete_node, *temp;

    while (curr != NULL && curr->next != NULL) // for outer loop
    {

        temp = curr->next;

        while (temp->next != NULL)
        { // for inner loop
            if (curr->data == temp->next->data)
            {
                delete_node = temp->next;
                temp->next = temp->next->next;
                delete (delete_node);
            }
            else
            {
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
}

int main()
{
    // code hear
    Node *n1 = new Node(4);
    Node *head = n1;
    Node *n2 = new Node(2);
    Node *n3 = new Node(5);
    Node *n4 = new Node(4);
    Node *n5 = new Node(2);
    Node *n6 = new Node(2);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    print(head);
    remove_Duplicate1(head);
    print(head);
    return 0;
}