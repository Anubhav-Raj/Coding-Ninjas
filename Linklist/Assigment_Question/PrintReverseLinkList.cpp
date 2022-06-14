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
  if(head==NULL){
    return;
  }
   
   print(head->next);
   cout<<head->data<<" ";
}
  int main(){
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
  return 0;
 }