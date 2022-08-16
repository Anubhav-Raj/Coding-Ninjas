#include <bits/stdc++.h>
#include "../TreeClass.cpp"
using namespace std;


   void  ceil_and_floor(TreeClass<int> *root, int data){
      
       if(root->data > data){
            if(root->data < ceil){
                 ceil=root.data;
            }
       } 

        if( root->data < data){
            if( root->data > floor){
                 floor=root.data;
            }
       }
       
     
    for(int i=0;i<root ->children.size();i++){

          ceil_and_floor(root->children[i],data);
    }
  return;
   }

    

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



 
     static   int  floor = INT_MIN;// largest among samller
     static int  ceil=INT_MAX;// smallest among largest
        ceil_and_floor(root,7);
   cout<<floor<<"  "<<ceil <<endl;
     
 return 0;
}