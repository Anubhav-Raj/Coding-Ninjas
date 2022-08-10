#include <bits/stdc++.h>
#include "TreeClass.cpp"
using namespace std;
 int main(){
// code hear

// creating object of treeClass
TreeClass<int> *root= new TreeClass<int>(1);
TreeClass<int> *Node1= new TreeClass<int>(2);
TreeClass<int> *Node2= new TreeClass<int>(3);
TreeClass<int> *Node3= new TreeClass<int>(4);

//connecting   node  with root
  root->children.push_back(Node1);
  root->children.push_back(Node2);
  root->children.push_back(Node3);

 return 0;
}