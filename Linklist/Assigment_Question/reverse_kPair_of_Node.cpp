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

Node *reverse(Node *head, int k)
{
    if(k == 0 ){
         return head;
    }
    Node *Curr=head;
    Node *fwd=NULL;
    Node *prev=NULL;
     int count=0;
       while( count<k && Curr!=NULL){
         fwd=Curr->next;
          Curr->next=prev;
          prev=Curr;
          Curr=fwd;
          count++;
       }
        if(fwd!=NULL){
            head->next=reverse(fwd,k);
        }
         return prev;
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
    head = reverse(head, 4);
    print(head);
    return 0;
}