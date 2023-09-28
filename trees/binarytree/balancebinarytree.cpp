#include<iostream>
#include<cstring>
#include<queue>
#include"constructor1.h"
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
int height(BinaryTreeNode<int>* root) {
    // Write our code here
    if(root==NULL)
    {
        return 0;
    }
    int b=height(root->left);
    int c=height(root->right);
   
    if(b>c)
    {
        return b+1;
    }
	return c+1;
}
bool isBalanced(BinaryTreeNode<int> *root) 
{
	// Write your code here
    if(root==NULL)
    {
        return true;
    }
    // for root
    int a=height(root->left);
    int b=height(root->right);
    if(abs(a-b)>1)
    {
        return false;
    }
    bool c=isBalanced(root->left);
    bool d=isBalanced(root->right);
    if(c==true && d==true)
    {
        return true;
    }
    return false;
	
	
}
int main()
{

return 0;
}