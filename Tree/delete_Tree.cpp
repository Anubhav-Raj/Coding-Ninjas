#include <bits/stdc++.h>
#include "TreeClass.cpp"
using namespace std;

void deleteTree(TreeClass<int> *root)
{

    if (root == NULL)
    {
        return;
    }

    for (int i = 0; i < root->children.size(); i++)
    {

        deleteTree(root->children[i]);
    }
    delete root;
}
int main()
{
    // code hear
    // creating object of treeClass
    TreeClass<int> *root = new TreeClass<int>(0);
    TreeClass<int> *Node1 = new TreeClass<int>(1);
    TreeClass<int> *Node2 = new TreeClass<int>(2);
    TreeClass<int> *Node3 = new TreeClass<int>(3);

    TreeClass<int> *Node4 = new TreeClass<int>(4);
    TreeClass<int> *Node5 = new TreeClass<int>(5);
    TreeClass<int> *Node6 = new TreeClass<int>(6);
    TreeClass<int> *Node7 = new TreeClass<int>(7);
    TreeClass<int> *Node8 = new TreeClass<int>(8);
    TreeClass<int> *Node9 = new TreeClass<int>(9);
    TreeClass<int> *Node10 = new TreeClass<int>(10);
    TreeClass<int> *Node11 = new TreeClass<int>(11);
    TreeClass<int> *Node12 = new TreeClass<int>(12);

    // connecting   node  with root
    root->children.push_back(Node1);
    root->children.push_back(Node2);
    root->children.push_back(Node3);

    Node1->children.push_back(Node4);
    Node2->children.push_back(Node5);
    Node3->children.push_back(Node6);

    Node4->children.push_back(Node7);
    Node4->children.push_back(Node8);

    Node5->children.push_back(Node9);

    Node6->children.push_back(Node10);

    Node10->children.push_back(Node11);

    Node11->children.push_back(Node12);

    delete root; // calling  destructer

    deleteTree(root); // calling delete function

    return 0;
}