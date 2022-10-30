#include <bits/stdc++.h>
using namespace std;
#include "TreeClass.cpp"

void treePrintLevelWise(TreeClass<int> *root)
{
    queue<TreeClass<int> *> mainQueue;
    mainQueue.push(root);

    queue<TreeClass<int> *> childQueue;
 
    while (mainQueue.size() > 0)
    {
        TreeClass<int> *node = mainQueue.front();
        mainQueue.pop();
        cout << node->data << " ";

        for (int i = 0; i < node->children.size(); i++)
        {
            childQueue.push(node->children[i]);
           
        }
        if (mainQueue.size() == 0)
        {
            mainQueue = childQueue;
            childQueue = queue<TreeClass<int> *>();
            
            cout << endl;
        }
    }
}

int main()
{
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

    treePrintLevelWise(root);

    return 0;
}