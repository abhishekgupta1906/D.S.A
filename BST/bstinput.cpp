#include <iostream>
#include <cstring>
#include <queue>
#include "constructor2.h"
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
void elementsInRangeK1K2(BinaryTreeNode<int> *root, int k1, int k2)
{
    if (root == NULL)
    {
        return;
    }
    if (root->data >= k1 && root->data <= k2)
    {
        elementsInRangeK1K2(root->left, k1, k2);
        cout << root->data << " ";
        elementsInRangeK1K2(root->right, k1, k2);
    }
    else if (root->data < k1)
    {
        elementsInRangeK1K2(root->right, k1, k2);
    }
    else if (root->data > k2)
    {
        elementsInRangeK1K2(root->left, k1, k2);
    }
    

    // Write your code here
}
// 5 10 6 2 3 -1 -1 -1 -1 -1 9 -1 -1

int main()
{
    BinaryTreeNode<int> *root = NULL;
    root = create(root);
    printLevelWise(root);

    delete root;

    return 0;
}