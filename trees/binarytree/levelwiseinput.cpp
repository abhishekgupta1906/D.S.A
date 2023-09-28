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
             cout << "L:"<<"-1"<<",";

            
        }
        else
        {
            cout << "L:" << front->left->data<<",";
            pendingNodes.push(front->left);
        }

       
        if (front->right == NULL)
        {
            cout << "R:"<<"-1";

        }

            
        else
        {
            cout << "R:" << front->right->data;
            pendingNodes.push(front->right);
        }
        cout<<endl;
    }
}
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here
    if(root==NULL)
    {
        return false;
    }
    if(root->data==x)
    {
        return true;
    }
    bool a=isNodePresent(root->left,x);
    bool b=isNodePresent(root->right,x);
    if(a==true || b==true)
    {
        return true;
    }
    return false;
   

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
// 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
int main()
{
    BinaryTreeNode<int> *root = NULL;
    root = create(root);
    printLevelWise(root);
    bool c=isNodePresent(root,9);
    cout<<c;
    delete root;
    
    
    return 0;
}