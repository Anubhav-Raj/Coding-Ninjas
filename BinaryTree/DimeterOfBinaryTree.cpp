#include <bits/stdc++.h>
#include "BinaryTreeClass.cpp"
using namespace std;

 int height(BinaryTreeNode<int> *root){

       if( root==NULL){
         return 0;
       }
        
         int left_ht= height(root->left);
          int right_ht= height(root->right);
            return  max(left_ht,right_ht)+1;

 }
int dimeter(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int option1 = height(root->left) + height(root->right);
    int option2 = dimeter(root->left);
    int option3 = dimeter(root->right);
    return max(option1, max(option2, option3));
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
int main()
{
    // code hear
    BinaryTreeNode<int> *root=takeInputLevelWise();
  cout<<dimeter(root);
     

    return 0;
}