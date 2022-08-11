#include <bits/stdc++.h>
#include "../TreeClass.cpp"
using namespace std;
 //Calulate the sum of  root node and their children
int sumNode(TreeClass<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int sum = root->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        sum += root->children[i]->data;
    }
    return sum;
}


TreeClass<int> *maxSumNode(TreeClass<int> *root)
{
    if (root == NULL) //Edge Case
    {
        return  nullptr;
    }
    TreeClass<int> *result = root; // store the final result

    int maxsum = sumNode(root); // get sum of  root node and their children node

    for (int i = 0; i < root->children.size(); i++)
    {
        TreeClass<int> *temp = maxSumNode(root->children[i]);

        int sum = sumNode(temp);

        if (maxsum < sum)
        {
            maxsum = sum;
            result = temp;
        }
    }

    return result;
}

int main()
{
    // code hear
    TreeClass<int> *root = new TreeClass<int>(10);
    TreeClass<int> *Node1 = new TreeClass<int>(2);
    TreeClass<int> *Node2 = new TreeClass<int>(3);
    TreeClass<int> *Node3 = new TreeClass<int>(4);

    TreeClass<int> *Node4 = new TreeClass<int>(100);
    TreeClass<int> *Node5 = new TreeClass<int>(200);
    TreeClass<int> *Node6 = new TreeClass<int>(5);
    TreeClass<int> *Node7 = new TreeClass<int>(7);
    TreeClass<int> *Node8 = new TreeClass<int>(800);
    TreeClass<int> *Node9 = new TreeClass<int>(9);
    TreeClass<int> *Node10 = new TreeClass<int>(10);
    TreeClass<int> *Node11 = new TreeClass<int>(11);
    TreeClass<int> *Node12 = new TreeClass<int>(12);

    // connecting   node  with root
    root->children.push_back(Node1);
    root->children.push_back(Node2);
    root->children.push_back(Node3);

    Node1->children.push_back(Node4);
    Node1->children.push_back(Node5);
    Node2->children.push_back(Node6);

    Node3->children.push_back(Node8);
    //   Node4->children.push_back(Node8);

    //   Node5->children.push_back(Node9);

    //   Node6->children.push_back(Node10);

    //   Node10->children.push_back(Node11);

    //   Node11->children.push_back(Node12);

    cout << endl;
    cout << maxSumNode(root)->data;

    return 0;
}