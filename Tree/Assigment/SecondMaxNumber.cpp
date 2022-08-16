#include <bits/stdc++.h>
#include "../TreeClass.cpp"

  class Pair {
      public:
         TreeClass<int> *max;
         TreeClass<int> *Smax;
     Pair( TreeClass<int> *max, TreeClass<int> *Smax){
        this->max=max;
         this->Smax=Smax;
     }

  };

    Pair help(TreeClass<int>* root){

        if(root==NULL){
              Pair r (NULL,NULL);
               return r;
        }
           Pair ans(root,NULL);

            for( int i=0 ;i< root->children.size();i++){

                 Pair  child=  help(root->children[i]);
                   
                  if(child.max->data > ans.max->data){

                    // condition 1
                     if(child.Smax ==NULL ){
                         ans.Smax= ans.max;
                          ans.max=child.max;
                     } else{
                          // condition 2
                         if( child.Smax->data > ans.max->data){
                                   ans.Smax=child.Smax;
                                    ans.max= child.max;
                         } else{
                             ans.Smax=ans.max;
                             ans.max= child.max;
                         }
                     }

                  } else {

                     if(ans.max->data!= child.max->data && (ans.Smax==NULL || child.max->data > ans.Smax->data)){
                         ans.Smax= child.max;
                     }
                  }


            }
             return ans;
        

   }

     TreeClass<int>* secondLargestElement(TreeClass<int> *root){
         if(root==NULL){
             return root;
         }
         Pair ans =help(root);
          return ans.Smax;
     }
  
using namespace std;
 int main(){
// code hear

// creating object of treeClass
  TreeClass<int> *root = new TreeClass<int>(0);
  TreeClass<int> *Node1 = new TreeClass<int>(1);
  TreeClass<int> *Node2 = new TreeClass<int>(2);
  TreeClass<int> *Node3 = new TreeClass<int>(3);

  TreeClass<int> *Node4 = new TreeClass<int>(4);
  TreeClass<int> *Node5 = new TreeClass<int>(15);
  TreeClass<int> *Node6 = new TreeClass<int>(16);
  TreeClass<int> *Node7 = new TreeClass<int>(7);
  TreeClass<int> *Node8 = new TreeClass<int>(8);
  TreeClass<int> *Node9 = new TreeClass<int>(9);
  TreeClass<int> *Node10 = new TreeClass<int>(10);
  TreeClass<int> *Node11 = new TreeClass<int>(11);
  TreeClass<int> *Node12 = new TreeClass<int>(12);

  // connecting   node  with root
  root->children.push_back(Node1);
  root->children.push_back(Node2);
  root->children.push_back(Node3);

  Node1->children.push_back(Node4);
  Node2->children.push_back(Node5);
  Node3->children.push_back(Node6);

  Node4->children.push_back(Node7);
  Node4->children.push_back(Node8);

  Node5->children.push_back(Node9);

  Node6->children.push_back(Node10);

  Node10->children.push_back(Node11);

  Node11->children.push_back(Node12);
 TreeClass<int> *res=   secondLargestElement(root);
        cout<<res->data;

 return 0;
}