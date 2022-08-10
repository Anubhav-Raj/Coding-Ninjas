#include <bits/stdc++.h>
#include "TreeClass.cpp"
using namespace std;

void print_tree(TreeClass<int> *root)
{

    // Edge Case:
    if (root == NULL)
    {
        return;
    }

    cout << root->data << ": ";
     for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }

    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {

        print_tree(root->children[i]);
    }
}

int main()
{
    // creating object of treeClass
TreeClass<int> *root= new TreeClass<int>(1);
TreeClass<int> *Node1= new TreeClass<int>(2);
TreeClass<int> *Node2= new TreeClass<int>(3);
TreeClass<int> *Node3= new TreeClass<int>(4);

//connecting   node  with root
  root->children.push_back(Node1);
  root->children.push_back(Node2);
  root->children.push_back(Node3);

  print_tree(root);
  
    return 0;
}