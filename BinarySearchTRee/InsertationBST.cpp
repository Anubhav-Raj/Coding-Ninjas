#include <bits/stdc++.h>
#include "BST.cpp"
using namespace std;
      
      


void PrintTreeLevelWise(BST*root){
       vector<vector<int>>ans;
      //Edge Case
        if( root==NULL){
             return;
        }
        
         queue<BST*> q;
         q.push(root);
        
      
        while (!q.empty())
        {

       int count =q.size();
         vector<int> level;
          for(int i=0 ;i<count; i++){
             BST* node= q.front();
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

      BST *insertDataBST(BST *root, int data){
     
     //BaseCase 
      if(root==NULL){
        root = new BST(data);
         return root;

      }

       if( root->data <data){
          //Right me insert karna hai
             root->right= insertDataBST(root->right,data);
       }
       if( root->data >data){
           //Left me insert karna hai
             root->left= insertDataBST(root->left,data);
       }
    
        return root;
  }

    BST *insertTree(BST *&root){
            int data;
            cin>>data;
        
              while(data!=-1){
                  root= insertDataBST(root,data);
                   cin>>data;

              }
               return root;
               
     }

 int main(){
// code hear
  
  BST *root=NULL;
   cout<<"Enter the Data To Insert BST "<<endl;
   root= insertTree(root);
    cout<<endl;
   PrintTreeLevelWise(root);


     
 return 0;
}