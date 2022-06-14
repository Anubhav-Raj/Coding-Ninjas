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

 Node *Delete( Node *head, int index){
      if(head==NULL){
         return head;
      }
       if(index==1){
         head=head->next;
          return head;
       }
        Node *tempNode= Delete(head->next, index-1);
         head-> next= tempNode;
         return head;

 }
 
 void print(Node *head)
{
    Node *tempPointer = head; // we dont want to lost address of  head pointer
    while (tempPointer != NULL)
    {
        cout << tempPointer->data << "->"; // prining the  date o  f node
        tempPointer = tempPointer->next;   //  updating the  value  of head
    }
     cout<<endl;
}
  int main(){

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
    head=Delete(head,1);
     print(head);
      
  return 0;
 }