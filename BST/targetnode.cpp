#include <iostream>
#include <cstring>
#include <queue>
#include "constructor2.h"
#include <climits>
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
void printatlevelk(BinaryTreeNode<int> *root, int k)
{
    // Write your code herez
    if (root == NULL)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->data <<endl;
        return;
    }
    printatlevelk(root->left, k - 1);
    printatlevelk(root->right, k - 1);
}
// 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1ss

int nodes_AtDistanceK(BinaryTreeNode<int> *root, int node, int k)
{
    // Write your code herez
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == node)
    {
        printatlevelk(root, k);
        return 0;
    }
    int ld = nodes_AtDistanceK(root->left, node, k);
    if (ld != -1)
    {
        if (ld + 1 == k)
        {
            cout << root->data <<endl;
        }
        // printatlevelk(root->left, k);
        printatlevelk(root->right, k - (ld + 1) - 1);
        return ld+1;
    }
    int rd = nodes_AtDistanceK(root->right, node, k);
    if (rd != -1)
    {
        if (rd + 1 == k)
        {
            cout << root->data << " ";
        }
        // printatlevelk(root->right, k);
        printatlevelk(root->left, k - (rd + 1) - 1);
        return rd+1;
    }
    return -1;
}
// ld+1 -distance between target node and root of tree or -1 root and root ka distance
// return krega distance between target node and root
void nodesAtDistanceK(BinaryTreeNode<int> *root, int node, int k)
{
    nodes_AtDistanceK(root,node,k);
    // Write your code herez
}
// 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
int main()
{
    BinaryTreeNode<int> *root = NULL;
    root = create(root);
    nodesAtDistanceK(root,3,3);
    delete root;
    // very improtant

    return 0;
}