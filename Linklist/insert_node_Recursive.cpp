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
Node *insert_Node(Node *head, int index, int data)
{
    
    if (head == NULL)
    {
        return head;
    }
    if (index == 0)// inserting  node a starting index( accoding to recursion  it  will be   0 index)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return head;
    }
      if(index==1){// inserting node at  index 1 ( it help  we want  to insert a end  ,so accoding to  recursion it  will be index 1)
        Node* temp=new Node(data);
        temp->next=head->next;
        head->next=temp;
        return head;
    }
    Node *newTemp = insert_Node(head->next, index - 1, data);
    head->next = newTemp;// connecting   first node with   whole list 
    return head;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    // code hear
    Node *n1 = new Node(10);
    Node *head = n1;
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    Node *n5 = new Node(50);
    Node *n6 = new Node(60);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    head = insert_Node(head, 6, 100);
    print(head);
    return 0;
}