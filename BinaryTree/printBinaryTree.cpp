#include <bits/stdc++.h>
#include "BinaryTreeClass.cpp"
using namespace std;
 void printBinaryTree(BinaryTreeNode<int> *root){
     
     // baseCase 
      if(root==NULL){
         return ;
      }

          cout<< root->data<<":";

           if(root->left!=NULL){
              cout<<" L "<<root->left->data;
           }
           if(root->right!=NULL){
              cout<<" R "<<root->right->data;
           }
 cout<<endl;
         printBinaryTree( root->left);
          printBinaryTree( root->right);  

 }
 int main(){
// code hear 
    /*  BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
      BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(2);
      BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(3);

       root->left= node1;
       root->right= node2;
       */
       

        printBinaryTree(root);
         delete root;
     
     
 return 0;
}