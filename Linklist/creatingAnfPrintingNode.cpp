#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(node *head)
{
    node *tempPointer = head; // we dont want to lost address of  head pointer
    while (tempPointer != NULL)
    {
        cout << tempPointer->data << "->"; // prining the  date o  f node
        tempPointer = tempPointer->next;   //  updating the  value  of head
    }
}
int main()
{

    // statically  creating and connecting nodes

    // node n1(10);      // creating node first node of link list n1 it is called HEAD;
    // node *head = &n1; // storting the address of node 1
    // node n2(20);      // craeting another node
    // node n3(30);      // craeting another node
    // node n4(40);      // craeting another node
    // node n5(50);      // craeting another node

    // n1.next = &n2; // connecting  node
    // n2.next = &n3; // connecting  node
    // n3.next = &n4; // connecting  node
    // n4.next = &n5; // connecting  node


    // dynamically  creating and connecting nodes

    node *n1 = new node(10);
    node *head = n1;
    node *n2 = new node(20);
    node *n3 = new node(30);
    node *n4 = new node(40);
    node *n5 = new node(50);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    print(head);

    return 0;
}