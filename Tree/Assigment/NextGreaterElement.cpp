#include <bits/stdc++.h>
#include "../TreeClass.cpp"

// Approch 1
void nextGreaterElement(TreeClass<int> *root, int x, TreeClass<int> **res)
{
  if (root == NULL)
  {
    return;
  }

  if (root->data > x)
  {
    if (!(*res) || (*res)->data > root->data)
    {
      *res = root;
    }
  }
  for (int i = 0; i < root->children.size(); i++)
  {

    nextGreaterElement(root->children[i], x, res);
  }
}
TreeClass<int> *nextGreaterElement_Util(TreeClass<int> *root, int x)
{

  TreeClass<int> *res = NULL; // store the  final result  Node
  nextGreaterElement(root, x, &res);
  return res;
}

// Approch 2
TreeClass<int> *next_Greater_Element(TreeClass<int> *root, int x)
{

  TreeClass<int> *result = nullptr; // store final ans node of tree

  if (root == nullptr)
  { // Edge case
    return nullptr;
  }
  int childrenNode = root->children.size(); // size of children

  if (childrenNode == 0)
  { // Base Case
    if (root->data > x)
    {
      return root;
    }
    return nullptr;
  }

  for (int i = 0; i < childrenNode; i++)
  {
    TreeClass<int> *temp = next_Greater_Element(root->children[i], x);

    if (temp == nullptr)
    {
      continue;
    }

    if (result == nullptr || result->data > temp->data)
    {
      result = temp;
    }
  }
  return result;
}

TreeClass<int> *next_Greater_Element2(TreeClass<int> *root, int x)
{

  if (root == nullptr)
  { // Edge case
    return nullptr;
  }

  if (root->data > x)
  {
    return root;
  }
  int childCount = root->children.size();
  TreeClass<int> *result = nullptr;
   for(int i=0 ;i<childCount; i++){
     if((result= next_Greater_Element2(root->children[i],x))!=nullptr){
        return  result;
     }
    
   }
      return  nullptr;
}

using namespace std;
int main()
{
  // code hear
  // creating object of treeClass
  TreeClass<int> *root = new TreeClass<int>(0);
  TreeClass<int> *Node1 = new TreeClass<int>(1);
  TreeClass<int> *Node2 = new TreeClass<int>(2);
  TreeClass<int> *Node3 = new TreeClass<int>(3);

  TreeClass<int> *Node4 = new TreeClass<int>(4);
  TreeClass<int> *Node5 = new TreeClass<int>(15);
  TreeClass<int> *Node6 = new TreeClass<int>(16);
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

  TreeClass<int> *ans = next_Greater_Element2(root, 0);
  cout << ans->data << endl;

  return 0;
}