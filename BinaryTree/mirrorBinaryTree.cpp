#include <bits/stdc++.h>
#include "BinaryTreeClass.cpp"  
using namespace std;
    

    void printBinaryTree(BinaryTreeNode<int> *root){
     
     // baseCase 
      if(root==NULL){
         return;
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
    BinaryTreeNode<int>* mirrorBinaryTree(BinaryTreeNode<int> *root){
         if(root==NULL){
             return NULL;
         }
    

        BinaryTreeNode<int> *leftChild = mirrorBinaryTree(root->left);
         
        BinaryTreeNode<int> *rightChild =mirrorBinaryTree(root->right);
         
         if(leftChild !=NULL && rightChild!=NULL){
                //BinaryTreeNode<int>* temp =  mirrorBinaryTree(root->right);
                 root->right=leftChild;
                 root->left= rightChild;
             
          }


           
          if(rightChild==NULL){
                
                 root->right=leftChild;
               root->left=NULL;
          }
         if(leftChild==NULL){
                
                 root->left=rightChild;
               root->right=NULL;
          }
           return root;

        
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


printBinaryTree(root);
     BinaryTreeNode<int> *data= mirrorBinaryTree(root);
      
       cout<<endl<<endl;
      printBinaryTree(data);
    
     
 return 0;
}