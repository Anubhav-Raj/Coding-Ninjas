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
}
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
Node *sub(Node *head1, Node *head2)
{
    head1 = reverse(head1);
    head2 = reverse(head2);
    Node *dummy = new Node(-1);
    Node *temp = dummy;
    int barrow = 0;
    while (head1 != NULL || head2 != NULL || barrow)
    {
        int sub = 0;
        if (head1 != NULL)
        {
            sub = head1->data;
            head1 = head1->next;
        }
        if (head2 != NULL)
        {
            sub -= head2->data;
            head2 = head2->next;
        }
       
         sub = sub + barrow;
          

        if (sub < 0)
        {
            barrow = -1;
            sub = sub + 10;
        }
        else
        {
            barrow = 0;
        }
        Node *newNode = new Node(sub);
        temp->next = newNode;
        temp = temp->next;
    }
    Node *temp2=reverse(dummy->next);
     while(temp2!=NULL){
           if(temp2->data!=0){
             return temp2;  
           }
            temp2= temp2->next; 

     }
    return temp2;
}

int main()
{
    // code hear
    Node *n1 = new Node(1);
    Node *head1 = n1;
    Node *n2 = new Node(0);
    Node *n3 = new Node(0);
    // Node *n4 = new Node(4);
    // Node *n5 = new Node(5);
    // Node *n6 = new Node(6);
    // Node *n11 = new Node(7);

    n1->next = n2;
    n2->next = n3;
   // n3->next = n4;
    // n4->next = n5;
    // n5->next = n6;
    // n6->next = n11;

    Node *n7 = new Node(1);
    Node *head2 = n7;
    Node *n8 = new Node(2);
   // Node *n9 = new Node(9);
    // Node *n10 = new Node(3);

    n7->next = n8;
  //  n8->next = n9;
    // n9->next = n10;
    Node *head = sub(head1, head2);
    print(head);

    return 0;
}