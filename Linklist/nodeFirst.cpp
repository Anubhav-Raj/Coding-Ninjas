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

int main()
{
    // code hear

    // statically creating object

    node n1(10);      // creating node first node of link list n1 it is called HEAD;
    node *head = &n1; // storting the address of node 1
    node n2(20);      // craeting another node
    n1.next = &n2;    // connecting node n1 and  n2 togather;
    cout << n1.data << " " << n2.data << endl;
    cout << head->data << endl;

    // Dynamically crateing object
    node *n3 = new node(30);
    node *head2 = n3;
    node *n4 = new node(40);

    n3->next = n4; // connecting node n3 and n4
     cout << n3->data << " " << n4->data << endl;
    return 0;
}