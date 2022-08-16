#include <bits/stdc++.h>
#include "BinaryTreeClass.cpp"

using namespace std;
void printBinaryTree(BinaryTreeNode<int> *root)
{

    // baseCase
    if (root == NULL)
    {
        return;
    }

    cout << root->data << ":";

    if (root->left != NULL)
    {
        cout << " L " << root->left->data;
    }
    if (root->right != NULL)
    {
        cout << " R " << root->right->data;
    }
    cout << endl;
    printBinaryTree(root->left);
    printBinaryTree(root->right);
}
BinaryTreeNode<int> *takeInput()
{
    int rootdata;
    // cout<<"Enter the Root "<<endl;
    cin >> rootdata;
    if (rootdata == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootdata);
    BinaryTreeNode<int> *leftChild = takeInput();
    BinaryTreeNode<int> *rightChild = takeInput();

    root->left = leftChild;
    root->right = rightChild;
    return root;
}
int main()
{
    // code hear
    BinaryTreeNode<int> *root = takeInput();

    printBinaryTree(root);
    delete root;

    return 0;
}
