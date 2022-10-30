#include <bits/stdc++.h>
#include "BinaryTreeClass.cpp"
 using namespace std;

  void PrintTreeLevelWise(BinaryTreeNode<int> *root){
      vector<vector<int>>ans;
      //Edge Case
        if( root==NULL){
             return;
        }

         queue<BinaryTreeNode<int>*> q;
         q.push(root);
        
      
        while (!q.empty())
        {

       int count =q.size();
         vector<int> level;
          for(int i=0 ;i<count; i++){
             BinaryTreeNode<int>* node= q.front();
              q.pop();

              if(node->left!=NULL ){
                 q.push(node->left);
                
              }
               if(node->right!=NULL ){
                 q.push(node->right);
                
              }
               level.push_back(node->data);
               
            }

              ans.push_back(level);
        }
        
          for( int i=0; i<ans.size(); i++){
              for( int  j=0 ; j<ans[i].size();j++){
                cout<<ans[i][j]<<" ";
              }
               cout<<endl;
          }
   

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
  PrintTreeLevelWise(root);
     
 return 0;
}