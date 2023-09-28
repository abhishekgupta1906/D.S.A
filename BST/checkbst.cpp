#include <iostream>
#include <cstring>
#include <queue>
#include "constructorbst.h"
using namespace std;
BinaryTreeNode<int> *create(BinaryTreeNode<int> *root)
{
    int rootdata;
    cout << "Enter data:" << endl;
    cin >> rootdata;
    if (rootdata == -1)
    {
        return NULL;
    }
    root = new BinaryTreeNode<int>(rootdata);
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty())
    {
        /* code */
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter left child of:" << front->data << endl;
        int leftchildData;
        cin >> leftchildData;
        if (leftchildData != -1)
        {
            BinaryTreeNode<int> *leftchild = new BinaryTreeNode<int>(leftchildData);
            front->left = leftchild;
            pendingNodes.push(leftchild);
        }
        cout << "Enter right child of:" << front->data << endl;
        int rightchildData;
        cin >> rightchildData;
        if (rightchildData != -1)
        {
            BinaryTreeNode<int> *rightchild = new BinaryTreeNode<int>(rightchildData);
            front->right = rightchild;
            pendingNodes.push(rightchild);
        }
    }
    return root;
}
void printLevelWise(BinaryTreeNode<int> *root)
{
    // Write your code here
    if (root->data == -1)
    {
        return;
    }
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty())
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << front->data << ":";
        if (front->left == NULL)
        {
            cout << "L:"
                 << "-1"
                 << ",";
        }
        else
        {
            cout << "L:" << front->left->data << ",";
            pendingNodes.push(front->left);
        }

        if (front->right == NULL)
        {
            cout << "R:"
                 << "-1";
        }

        else
        {
            cout << "R:" << front->right->data;
            pendingNodes.push(front->right);
        }
        cout << endl;
    }
}
// min-int-min
// max-int max
bool is_BST(BinaryTreeNode<int> *root, int min, int max)
{
    // Write your code here
    if (root == NULL)
    {
        return true;
    }
    if (root->data < min || root->data > max)
    {
        return false;
    }
    bool b = is_BST(root->left, min, (root->data) - 1);
    bool c = is_BST(root->right, root->data, max);
    if (b && c)
    {
        return true;
    }
    return false;
}

// 5 2 10 0 1 -1 15 -1 -1 -1 -1 -1 -1
int main()
{
    BinaryTreeNode<int> *root = NULL;
    root = create(root);
    printLevelWise(root);
    bool d=is_BST(root,INT16_MIN,INT16_MAX);
    cout<<d;


    delete root;
    

    return 0;
}