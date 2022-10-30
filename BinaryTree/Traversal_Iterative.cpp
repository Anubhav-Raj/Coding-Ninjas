#include <bits/stdc++.h>
#include "BinaryTreeClass.cpp" 
using namespace std;
void PrintTreeLevelWise(BinaryTreeNode<int> *root){
    vector<vector<int>>ans;
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
  vector<int> preorderIterative(BinaryTreeNode<int> *root){
      
      vector<int> ans;
        
         stack<BinaryTreeNode<int> *>st;
           st.push(root);

            while(!st.empty()){
                 
                  BinaryTreeNode<int> *front = st.top();
                   st.pop();

                     ans.push_back(front->data);

                      if(front->right!=NULL)
                         st.push(front->right);

                       if(front->left!=NULL)
                           st.push(front->left);
            }
             return ans;
  }


vector<int> InorderIterative(BinaryTreeNode<int> *root){
      
      vector<int> ans;
        
         stack<BinaryTreeNode<int> *>st;
          BinaryTreeNode<int> *node= root;
            while(true){
                 
                  if(node!=NULL){
                    st.push(node);

                     node = node->left;

                  } else{
                     if(st.size()!=0){
                        node= st.top();
                         ans.push_back(node->data);
                         st.pop();
                          node= node->right;
                     } else{

                       break;
                     }


                  }

            }
             return ans;
  }
   vector<int> PostOrder(BinaryTreeNode<int> * root){  
      vector<int>ans;

     stack<BinaryTreeNode<int> *>s1;
     stack<BinaryTreeNode<int> *>s2;
       if(root!=NULL)
       s1.push(root);

       while(!s1.empty()){
          BinaryTreeNode<int> *s1_top= s1.top();
               s1.pop();
               s2.push(s1_top);
             
               if(s1_top->left!=NULL)
                 s1.push(s1_top->left);

                  if(s1_top->right!=NULL)
                   s1.push(s1_top->right);
       }
      while(!s2.empty()){
             ans.push_back(s2.top()->data);
              s2.pop();
      }
       return ans;
   }

    vector<int> preOrderUsingOneStack(BinaryTreeNode<int> *root){
         vector<int> ans;

         stack<BinaryTreeNode<int>*> st;
          BinaryTreeNode<int> *curr= root;

           while(curr!=NULL || !st.empty()){
                  if(curr!=NULL){
                      st.push(curr);
                       curr= curr->left;
                  } else{
                    
                      BinaryTreeNode<int>*temp=st.top()->right;
                       if(temp==NULL){
                         temp= st.top();
                          st.pop();
                           ans.push_back(temp->data);
                            while(!st.empty() && temp == st.top()->right){
                               temp= st.top();
                               st.pop();
                                ans.push_back( temp->data);
                            }

                       } else{

                         curr= temp;
                       }
                  }
           }
            return ans;
    }


    
     void print(vector<int> v){
         for(int i=0;i<v.size(); i++){
             cout<<v[i] <<" ";
         }
          cout<<endl;
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
    node4->left=node5;
    node4->right=node6;
   // node2->left= node5;
    //node2->right= node6;

 PrintTreeLevelWise( root);
  cout<<endl<<endl;
     vector<int> ans = preorderIterative(root);
      print(ans);
 
        vector<int> ans2 = InorderIterative(root);
      print(ans2);

         vector<int> ans3 = PostOrder(root);
      print(ans3);

        vector<int> ans4 = preOrderUsingOneStack(root);
      print(ans4);
     
     
 return 0;
}