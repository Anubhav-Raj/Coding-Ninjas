#include <bits/stdc++.h>
#include "TreeClass.cpp"
using namespace std;


 int  nodeCount(TreeClass<int>*root){
   
    int  cnt=1;
     for( int i=0;i<root->children.size();i++){
         int sm =nodeCount(root->children[i]);
          cout<<sm;
          cnt=cnt+sm;
     }
   return cnt;
 }
 int main(){
// code hear

    // creating object of treeClass
    TreeClass<int> *root = new TreeClass<int>(1);
    TreeClass<int> *Node1 = new TreeClass<int>(2);
    TreeClass<int> *Node2 = new TreeClass<int>(3);
    TreeClass<int> *Node3 = new TreeClass<int>(4);
    TreeClass<int> *Node4 = new TreeClass<int>(5);
    TreeClass<int> *Node5 = new TreeClass<int>(6);
    TreeClass<int> *Node6 = new TreeClass<int>(7);
    TreeClass<int> *Node7 = new TreeClass<int>(8);

    // connecting   node  with root
    root->children.push_back(Node1);
    root->children.push_back(Node2);
    root->children.push_back(Node3);
    Node1->children.push_back(Node4); 
    Node4->children.push_back(Node5);  
    Node5->children.push_back(Node6);
    Node1->children.push_back(Node7);   
     cout<<"Size of Tree: "<<nodeCount(root)<<endl;

 return 0;
}