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


int find_node(Node *head, int data)
{
    if (head == NULL)
    {
        return -1;
    }
    int node_index = -1;
    int index = 1;
    while (head != NULL)
    {
        if (data == head->data)
        {
            node_index = index;
            break;
        }
        head = head->next;
        index++;
    }
    return node_index;
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
    int index = find_node(head, 6);
    cout << " data  at index : " << index << endl;
    return 0;
}