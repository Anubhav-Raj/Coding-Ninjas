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
int length(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

Node *append_n_Node_to_End(Node *head, int k)
{

     if(head==NULL){
         return head;
     }
      if(k==0){
          return NULL;
      }
      

    Node *newHead, *newTail, *tail, *temp = head;
    int len = length(head);
    int pos = 1;
    while (temp->next != NULL)
    {
        if (len - k == pos)
        {
            newTail = temp;
        }
        if (len - k + 1 == pos)
        {
            newHead = temp;
        }
        temp = temp->next;  
        pos++;
    }
    newTail->next = NULL;
    temp->next = head;
    head = newHead;

    return head;
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
    print(head);
    head = append_n_Node_to_End(head, 3);
    print(head);

    return 0;
}