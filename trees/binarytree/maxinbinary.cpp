#include<iostream>
#include<cstring>
#include"constructor1.h"
#include<queue>
using namespace std ;
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
BinaryTreeNode<int>*maxNode(BinaryTreeNode<int>*root)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->left==NULL && root->right==NULL)
    {
        return root;
    }
    BinaryTreeNode<int>*max=root;
    BinaryTreeNode<int>*lmax=maxNode(root->left);
    if(max->data <lmax->data)
    {
        max=lmax;
    }
    BinaryTreeNode<int>*rmax=maxNode(root->right);
    if(max->data <rmax->data)
    {
        max=rmax;
    }
    return max;
}


int main()
{
    BinaryTreeNode<int>*root=NULL;
    root=create(root);
    BinaryTreeNode<int>*t=maxNode(root);
    cout<<t->data;
    delete root;

return 0;
}