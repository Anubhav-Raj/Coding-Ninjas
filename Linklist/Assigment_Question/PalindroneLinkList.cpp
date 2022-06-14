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

  int main(){
 // code hear
    Node *n1 = new Node(9);
    Node *head = n1;
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(3);
    Node *n5 = new Node(2);
    Node *n6 = new Node(9);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
  return 0;
 }