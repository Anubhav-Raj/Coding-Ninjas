#include <bits/stdc++.h>
#include "BinaryTreeClass.cpp"
using namespace std;
int main()
{
      // code hear
      BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
      BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(2);
      BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(3);

       root->left= node1;
       root->right= node2;
       
      return 0;
}