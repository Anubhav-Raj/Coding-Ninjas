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
 void print_ith_Node(Node *head, int index)
{
     if( head==NULL){
         return;
     }
    int pos = 1;
    Node *temp = head;
    while (temp != NULL)
    {
         if(pos==index){
              cout<<" Ith Node  is "<<temp->data<<endl;
                break;
         }
        pos++;
        temp = temp->next;
    }
   
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
    Node *n6 = new Node(50);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
     print_ith_Node(head,3);
    return 0;
}
