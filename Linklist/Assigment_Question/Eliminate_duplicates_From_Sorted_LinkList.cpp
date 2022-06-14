#include <bits/stdc++.h>
using namespace std;
class Node{
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
 Node *Remove_Duplicates(Node *head){
    //empty List
     if(head==NULL){
         return head;
     }
      Node *curr=head;
    while(curr!=NULL){
          if( (curr->next!= NULL)&&  (curr->data == curr->next->data)){
             Node *next_next= curr->next->next;
             Node *nodeToDelate =curr->next;
             delete(curr->next);
             curr->next=next_next;
              
          } else{// not equal
              curr= curr->next;
          }
          
    }
     return head;
 }
int main()
{
    // code hear
    Node *n1 = new Node(1);
    Node *head = n1;
    Node *n2 = new Node(2);
    Node *n3 = new Node(2);
    Node *n4 = new Node(3);
    Node *n5 = new Node(3);
    Node *n6 = new Node(4);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    print(head);
    head=Remove_Duplicates(head);
    print(head);

    return 0;
}