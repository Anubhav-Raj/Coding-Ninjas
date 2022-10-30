#include <bits/stdc++.h>
#include "BinaryTreeClass.cpp"
using namespace std;

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
int count(BinaryTreeNode<int> *root)
{
    int cnt = 1;
    if (root == NULL)
    {
        return 0;
    }

    int n = count(root->left);
    int m = count(root->right);
    cnt = n + m + 1;
    return cnt;
}

int main()
{
    // code hear

    // BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    // BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(3);
    // BinaryTreeNode<int> *node3 = new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int> *node4 = new BinaryTreeNode<int>(3);

    // root->left = node1;
    // root->right = node2;
    // node1->left = node3;
    // node1->right = node4;
      BinaryTreeNode<int> *root = takeInputLevelWise ();

    cout << count(root);
    delete root;
    return 0;
}