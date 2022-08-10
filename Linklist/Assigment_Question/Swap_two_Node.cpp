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

Node *Swap_node(Node *head, int index1, int index2)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    if (index1 == index2)
    {
        return head;
    }
    Node *temp = head;
    Node *prev1 = NULL, *curr1 = NULL, *prev2 = NULL, *curr2 = NULL, *temp_prev = NULL;
    int count = 0;

    // allocating  prev2,prev1 curr1,curr2 on  right place
    while (temp != NULL)
    {
        if (count == index1)
        {
            prev1 = temp_prev;
            curr1 = temp;
        }
        else
        {
            if (count == index2)
            {
                prev2 = temp_prev;
                curr2 = temp;
            }
        }
        temp_prev = temp;
        temp = temp->next;
        count++;
    }

    // heanding speacial case

    // heading  swep  1  node with other
    if (prev1 != NULL)
    {
        prev1->next = curr2;
    }
    else
    {
        head = curr2;
    }
    // heading  swep  last  node with other
    if (prev2 != NULL)
    {
        prev2->next = curr1;
    }
    else
    {
        head = curr2;
    }
    Node *temp1 = curr1->next;
    curr1->next = curr2->next;
    curr2->next = temp1;
    return head;
}


//Swap two alternative Nodes
 Node* swapPairs(Node* head) {
          
          Node *curr= head;
          Node *prev= NULL;
          Node *next=NULL;
        
        
        //Swaping of two node
             int count=0;
              while(curr!=NULL && count <2){
                       next= curr->next;
                       curr->next= prev;
                       prev= curr;
                       curr= next;
                       count++;
              }
         //Recursion Call
         if(next!=NULL){
              head->next=swapPairs(next);
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

    head = Swap_node(head, 0, 1);
      
    print(head);
    return 0;
}