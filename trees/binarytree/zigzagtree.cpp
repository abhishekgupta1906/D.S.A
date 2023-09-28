#include <iostream>
#include <cstring>
#include <queue>
#include <stack>
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
void zigZagOrder(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    stack<BinaryTreeNode<int> *> s1;
    s1.push(root);
    stack<BinaryTreeNode<int> *> s2;
    do
    {
        /* code */
        while (!s1.empty())
        {
            BinaryTreeNode<int> *t = s1.top();
            s1.pop();
            if (t->left != NULL)
            {
                s2.push(t->left);
            }
            if (t->right != NULL)
            {
                s2.push(t->right);
            }
            cout << t->data <<" ";
        }
        cout << endl;
        while (!s2.empty())
        {
            BinaryTreeNode<int> *t = s2.top();
            s2.pop();
            if (t->right != NULL)
            {
                s1.push(t->right);
            }
            if (t->left!= NULL)
            {
                s1.push(t->left);
            }
            cout << t->data <<" ";
        }
        cout << endl;

    } while (!s1.empty() || !s2.empty());

    // Write your code here
}
// 5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
int main()
{
    BinaryTreeNode<int> *root = NULL;
    root = create(root);
    zigZagOrder(root);

    delete root;

    return 0;
}