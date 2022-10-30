#include <bits/stdc++.h>
#include "BinaryTreeClass.cpp"
using namespace std;
 BinaryTreeNode<int> * NodeFind(BinaryTreeNode<int> *root , int data){
    //Base case
         if(root==NULL){
             return NULL; 
         }
         
        if(root->data==data){
             
               return root;
        }
         
    BinaryTreeNode<int> *leftNode= NodeFind(root->left,data);
     if(leftNode!= NULL){
         return leftNode;
     }
   BinaryTreeNode<int> *rightNode=  NodeFind(root->right,data);
     return rightNode;
        
      
   }


void printBinaryTree(BinaryTreeNode<int> *root)
{

    // baseCase
    if (root == NULL)
    {
        return;
    }

    cout << root->data << ":";

    if (root->left != NULL)
    {
        cout << " L " << root->left->data;
    }
    if (root->right != NULL)
    {
        cout << " R " << root->right->data;
    }
    cout << endl;
    printBinaryTree(root->left);
    printBinaryTree(root->right);
}
BinaryTreeNode<int> *takeInputLevelWise()
{ 
     int rootdata;
      cin>> rootdata;
    
       if( rootdata==-1){
         return NULL;
       }

       BinaryTreeNode<int> * root= new BinaryTreeNode<int> (rootdata);
        queue<BinaryTreeNode<int> *>pandingNode;
         pandingNode.push(root);

           while(pandingNode.size()!=0){
             
               BinaryTreeNode<int>* front =   pandingNode.front();
                  pandingNode.pop();

                   cout<<"Enter the  Left Child of"<<front->data<<" :";
                   int leftChild;
                    cin>>leftChild;
                     if(leftChild!=-1){
                        BinaryTreeNode<int>* left= new BinaryTreeNode<int>(leftChild);
                         front->left=left;
                          pandingNode.push(left);
                     }
                    


                     cout<<"Enter the  Right Child of"<<front->data<<" :";
                   int Rigthchild;
                    cin>>Rigthchild;
                     if(Rigthchild!=-1){
                        BinaryTreeNode<int>* Right= new BinaryTreeNode<int>(Rigthchild);
                         front->right=Right;
                          pandingNode.push(Right);
                     }
           }
        
        return  root;
    
}
 int main(){
// code hear
 BinaryTreeNode<int> *root= takeInputLevelWise();

// printBinaryTree(root);

  BinaryTreeNode<int> *FindNode=NodeFind(root,4);

   cout<< FindNode->data<<endl;
  
 return 0;
}