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
int level(BinaryTreeNode<int> *root, int data)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == data)
    {
        return 0;
    }
    int b = level(root->left, data);
    if (b != -1)
    {
        return b + 1;
    }
    int c = level(root->right, data);
    if (c != -1)
    {
        return c + 1;
    }
    return -1;
}
bool isCousin(BinaryTreeNode<int> *root, int p, int q)
{
    // Write your code here
    if (root == NULL)
    {
        return false;
    }
    int a = level(root, p);
    int b = level(root, q);
    if (a != b)
    {
        return false;
    }
    if (a == b)
    {
    }
}
vector<int> *longestPath(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        vector<int> *v = new vector<int>;
        v->push_back(root->data);
        return v;
    }
    vector<int> *leftoutput = longestPath(root->left);
    vector<int> *rightoutput = longestPath(root->right);
    if (leftoutput == NULL && rightoutput != NULL)
    {
        rightoutput->push_back(root->data);
        return rightoutput;
    }
    if (leftoutput != NULL && rightoutput == NULL)
    {
        leftoutput->push_back(root->data);
        return leftoutput;
    }
    else
    {
        if(leftoutput->size()>rightoutput->size())
        {
            leftoutput->push_back(root->data);
            return leftoutput;
        }
        else
        {
            rightoutput->push_back(root->data);
            return rightoutput;

        }
    }

    // Write your code here
}
// 5 6 10 2 3 4 -1 -1 -1 -1 9 -1 -1 -1 -1
int main()
{
    BinaryTreeNode<int> *root = NULL;
    root = create(root);
    vector<int> *v = longestPath(root);

    delete root;

    return 0;
}
