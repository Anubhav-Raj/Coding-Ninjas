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
char enterNode;

Node *takeInput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    int trigger = 0;
    while (enterNode == 'Y' || enterNode == 'y' || trigger == 0)
    {
        Node *newNode = new Node(data);
        trigger = 1;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "Do you want to enter more node (Y/N):";
        cin >> enterNode;
        if (enterNode == 'Y' || enterNode == 'y')
        {

            cin >> data;
        }
        else
        {
            if (enterNode == 'n' || enterNode == 'N')  
            {
                return head;
            } else{
                 cout<<"Enter Valid Input";
            }
        }
    }
    return head;
}

//Efficient  Input Function 
Node *takeInput_Batter()
{
    int data;
    cin >> data;
    Node *head = NULL;
     Node *tail =NULL;
    int trigger = 0;
    while (enterNode == 'Y' || enterNode == 'y' || trigger == 0)
    {
        Node *newNode = new Node(data);
        trigger = 1;
        if (head == NULL)
        {
            head = newNode;
             tail=newNode;// 9431234229
        }
        else
        {
          
            tail->next = newNode;
              tail= newNode;
        }
        cout << "Do you want to enter more node (Y/N):";
        cin >> enterNode;
        if (enterNode == 'Y' || enterNode == 'y')
        {

            cin >> data;
        }
        else
        {
            if (enterNode == 'n' || enterNode == 'N')  
            {
                return head;
            } else{
                 cout<<"Enter Valid Input";
            }
        }
    }
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
}

int main()
{
    // code hear
   // Node *n1 = takeInput();
      Node *n1 = takeInput_Batter();
    print(n1);

    return 0;
}