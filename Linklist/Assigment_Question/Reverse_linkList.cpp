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

Node *reverse(Node *head)
{   //Base Case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
      
    Node *smallAns = reverse(head->next);// recursive  Call  it will give reverse  on list list 2 t0 n
    Node *temp = smallAns;

    //  travers to the node and finding the  last node of list   
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head;//  attech  head to last node
    head->next = NULL;

    return smallAns;

    // time complexcity is O(n^2)
}


 //Approch 2
 Node *reverse2(Node *head)
{   //Base Case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
      
    Node *smallAns = reverse2(head->next);// recursive  Call  it will give reverse  on list list 2 t0 n
    Node *temp = smallAns;

   
    Node *tail=head->next;
    tail->next = head;//  attech  head to last node
    head->next = NULL;

    return smallAns;

    // time complexcity is O(n)
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

    print(head);
    head = reverse2(head);
     
    print(head);

    return 0;
}