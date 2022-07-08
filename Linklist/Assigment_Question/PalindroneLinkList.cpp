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
Node *middle(Node *head)
{
  Node *slow = head;
  Node *fast = head;
  while (fast->next != NULL || fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}
Node *reverse(Node *head)
{
  Node *curr = head, *prev = NULL;
  while (curr != NULL)
  {
    Node *temp = curr->next;
    curr = prev;
    prev = temp;
  }
  return prev;
}

bool Cheak_Palidrom(Node *head)
{
  if (head == NULL)
  {
    return true;
  }
  // Node *middle(Node * head);
  Node *mid = middle(head);
  Node *last = reverse(mid->next);
  Node *curr = head;
  while (last != NULL)
  {
    if (last->data != curr->data)
    {
      return false;
    }
    last = last->next;
    curr = curr->next;
  }
  return true;
}
 

int main()
{
  // code hear
  Node *n1 = new Node(9);
  Node *head = n1;
  Node *n2 = new Node(2);
  Node *n3 = new Node(3);
  Node *n4 = new Node(4);
  Node *n5 = new Node(1);
 // Node *n6 = new Node(9);
  n1->next = n2;
  n2->next = n3;
  n3->next = n4;
  n4->next = n5;  Node * mid= middle(head);
 cout<< mid->data<<endl;

  if (Cheak_Palidrom(head))
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
  return 0;
}