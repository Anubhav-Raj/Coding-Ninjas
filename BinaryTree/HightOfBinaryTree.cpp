#include <bits/stdc++.h>
#include "BinaryTreeClass.cpp"
using namespace std;
  
  int hightOfTree(BinaryTreeNode<int> *root){
      if(root ==NULL){
         return 0;
      }
      int ht=0;
        int lefhight= hightOfTree(root->left);
         int righthight= hightOfTree(root->right);
           int   maxi= max(lefhight,righthight);
           
           ht= maxi+1;
          return  ht;
       
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

BinaryTreeNode<int> *root=takeInputLevelWise();
  cout<<hightOfTree(root);
     
 return 0;
}