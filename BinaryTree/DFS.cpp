#include <bits/stdc++.h>
#include "BinaryTreeClass.cpp"
using namespace std;
   void inorder(BinaryTreeNode<int>* root){
       if( root==NULL){
         return;
       }
          inorder(root->left);
           cout<<root->data<<" ";
            inorder(root->right);
   }

    void preorder(BinaryTreeNode<int>* root){
       if( root==NULL){
         return;
       }
          
            cout<<root->data<<" ";
            preorder(root->left);
         
            preorder(root->right);
   }

   void postorder(BinaryTreeNode<int>* root){
       if( root==NULL){
         return;
       }
          
        
            postorder(root->left);
            postorder(root->right);
             cout<<root->data<<" ";
   }
 int main(){
// code hear
     BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(2);
    BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(3);
    BinaryTreeNode<int> *node3 = new BinaryTreeNode<int>(4);
    BinaryTreeNode<int> *node4 = new BinaryTreeNode<int>(5);
    BinaryTreeNode<int> *node5 = new BinaryTreeNode<int>(6);
    BinaryTreeNode<int> *node6 = new BinaryTreeNode<int>(7);

    root->left = node1;
    root->right = node2;
    node1->left = node3;
    node1->right = node4;
    node2->left= node5;
    node2->right= node6;
    inorder(root);
     cout<<endl;
    preorder(root);
     cout<<endl;
     postorder(root);

 return 0;
}