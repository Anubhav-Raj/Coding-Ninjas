#include <bits/stdc++.h>
#include "TreeClass.cpp"
using namespace std;
TreeClass<int> *takeInput()
{
    int rootdata;
    cout << "Enter Data: " << endl;
    cin >> rootdata;

    TreeClass<int> *root = new TreeClass<int>(rootdata);
    int n;
    cout << "How many node  of " << rootdata << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        TreeClass<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

// Take Input LevelWise

TreeClass<int> *takeInputLevalWise()
{
    int rootdata;
    cout << "Enter rootData: " << endl;
    cin >> rootdata;
    TreeClass<int> *root = new TreeClass<int>(rootdata);

    queue<TreeClass<int>*> pendingNode;
    pendingNode.push(root);

    while (!pendingNode.empty())
    {
        TreeClass<int> *front = pendingNode.front();
        pendingNode.pop();

        cout << "Enter  the  number of Child Node of " << front->data << endl;
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++)
        {
            cout << "Enter" << i << "th child of " << front->data << endl;
            int childData;
            cin >> childData;
            TreeClass<int> *child = new TreeClass<int>(childData);

            front->children.push_back(child);
             pendingNode.push(child);


        }
    }

    return root;
}

void print_tree(TreeClass<int> *root)
{

    // Edge Case:
    if (root == NULL)
    {
        return;
    }

    cout << root->data << ": ";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }

    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {

        print_tree(root->children[i]);
    }
}

int main()
{
    // code hear

    TreeClass<int> *root = takeInputLevalWise();
    print_tree(root);
    return 0;
}