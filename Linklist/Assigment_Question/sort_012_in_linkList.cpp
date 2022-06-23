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
void sort(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    int count[3] = {0, 0, 0};
    while (temp != NULL)
    {
        count[temp->data] += 1;
        temp = temp->next;
    }
    int i = 0;
    temp = head;
     while(temp!=NULL){
         if(count[i]==0){
             i++;
         } else{
             temp->data=i;
              count[i]--;
               temp=temp->next;
         }
     }
}
int main()
{
    // code hear
    Node *n1 = new Node(0);
    Node *head = n1;
    Node *n2 = new Node(1);
    Node *n3 = new Node(2);
    Node *n4 = new Node(3);
    Node *n5 = new Node(1);
    Node *n6 = new Node(2);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    sort(head);
    print(head);
    return 0;
}