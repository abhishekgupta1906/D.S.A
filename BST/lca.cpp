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
int getLCA(BinaryTreeNode<int> *root, int a, int b)
{
    if (root == NULL)
    {
        // a and dono present nhi h
        return -1;
    }
    // a and b me relation h toh parent h ya grandparent ya fir jo bhi
    // usko print karo
    if (root->data == a || root->data == b)
    {
        return root->data;
    }
    // agar dono me koi ek present h toh jo h usko print karo
    int x = getLCA(root->left, a, b);
    int y = getLCA(root->right, a, b);
    if (x != -1 && y == -1)
    {
        return x;
    }
    else if (x == -1 && y != -1)
    {
        return y;
    }
    else if (x == -1 && y == -1)
    {
        return -1;
    }
    else
    {
        return root->data;
        // x leftsubtree me ,y rightsubtree h
    }

    // Write your code here
}
int GetLCA(BinaryTreeNode<int> *root, int val1, int val2)
{
    // Write your code here
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == val1 || root->data == val2)
    {
        return root->data;
    }
    if (val1 < root->data && val2 < root->data)
    {
        int b = GetLCA(root->left, val1, val2);
        if (b == -1)
        {
            return -1;
        }
        else
        {
            return b;
        }
    }
    else if (val1 < root->data && val2 >= root->data)
    {
        int x = GetLCA(root->left,val1,val2);
        int y = GetLCA(root->right,val1,val2);
        if (x != -1 && y == -1)
        {
            return x;
        }
        else if (x == -1 && y != -1)
        {
            return y;
        }
        else if (x == -1 && y == -1)
        {
            return -1;
        }
        else
        {
            return root->data;
            // x leftsubtree me ,y rightsubtree h
        }
    }
    else
    {
        int b = GetLCA(root->right, val1, val2);
        if (b == -1)
        {
            return -1;
        }
        else
        {
            return b;
        }


    }
}
// 8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1

int main()
{
    BinaryTreeNode<int> *root = NULL;
    root = create(root);

    int c =GetLCA(root,2,8);
    cout << c;

    delete root;

    return 0;
}