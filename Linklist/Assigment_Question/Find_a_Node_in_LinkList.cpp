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
//searching node Iterative
int find_Node(Node *head, int data)
{
 if( head==NULL){
     return -1;
 }
      Node *temp=head;
       int pos=1;
       while(temp!=NULL){
          if( temp->data== data){
               return  pos;
          } else{
             pos++;
            temp= temp->next;   
          }
       }
        return -1;
}

 //searching  Recursive
 int find_Recursive(Node *head, int data, int pos){
     if(head==NULL){
         return -1;
     }
      if( head->data==data){
         return pos;
      } 
         return  find_Recursive(head->next, data ,pos+1);// pos +1 for indentify the  position on  index
    
       
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
  // cout <<" Data at index  "<<find_Node(head,500);
    cout<<"Data at index "<<find_Recursive(head,80,1);// 1 is  for indentify the position of  index 
    return 0;
}