#include <iostream>
#include <cstring>
#include <queue>
#include "constructor1.h"
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
    if (root == NULL)
    {
        return;
    }
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        /* code */
        BinaryTreeNode<int> *t = q.front();
        q.pop();
        if (t != NULL)
        {
            if (t->left != NULL)
            {
                q.push(t->left);
            }
            if (t->right != NULL)
            {
                q.push(t->right);
            }
            cout << t->data <<" ";
        }
        else
        {
            if (!q.empty())
            {
                cout << endl;
                q.push(NULL);
            }
        }
    }

    // Write your code here
}
// 10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1 
int main()
{
    BinaryTreeNode<int> *root = NULL;
    root = create(root);
    printLevelWise(root);
    delete root;


    return 0;
}