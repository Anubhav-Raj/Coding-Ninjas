#include <bits/stdc++.h>
#include  "../TreeClass.cpp"
void treePrintLevelWise(TreeClass<int> *root)
{
    queue<TreeClass<int> *> mainQueue;
    mainQueue.push(root);

    queue<TreeClass<int> *> childQueue;
    int count = 0;
    while (mainQueue.size() > 0)
    {
        TreeClass<int> *node = mainQueue.front();
        mainQueue.pop();
        cout << node->data << " ";

        for (int i = 0; i < node->children.size(); i++)
        {
            childQueue.push(node->children[i]);
            count++;
        }
        if (mainQueue.size() == 0)
        {
            mainQueue = childQueue;
            childQueue = queue<TreeClass<int> *>();
            
            cout << endl;
        }
    }
}

 void replaceWithDefth(TreeClass<int> *root ,int defth){
     if(root==NULL){
         return;
     }
       root->data=defth;
       
        for(int i=0; i<root->children.size(); i++){
             replaceWithDefth(root->children[i],defth+1);
        }
          return;
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

 treePrintLevelWise(root);
  cout<<endl<<endl;
 replaceWithDefth(root,0);
  treePrintLevelWise(root);



 return 0;
}