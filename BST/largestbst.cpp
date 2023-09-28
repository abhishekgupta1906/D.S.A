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
class Quad
{
public:
    int min;
    int max;
    int height;
    bool isBST;
};
Quad largest_BSTSubtree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        Quad p;
        p.min = INT16_MAX;
        p.max = INT_MIN;
        p.height = 0;
        p.isBST = true;
        return p;
    }
    Quad leftans = largest_BSTSubtree(root->left);
    Quad rightans = largest_BSTSubtree(root->right);
    Quad p;
    int minterm = min(root->data, min(leftans.min, rightans.min));
    int maxterm = max(root->data, max(leftans.max, rightans.max));
    bool isBSTFinal = (root->data > leftans.max) && (root->data < rightans.min) && (leftans.isBST == true) && (rightans.isBST == true);
    p.min = minterm;
    p.max = maxterm;
    p.isBST = isBSTFinal;
    if(p.isBST==true)
    {
        p.height=max(leftans.height,rightans.height)+1;
        return p;

    }
    p.height=max(leftans.height,rightans.height);

    return p;
    
}

int largestBSTSubtree(BinaryTreeNode<int> *root)
{
    // Write your code here
    Quad p1 = largest_BSTSubtree(root);
    
    return p1.height;
}
// 5 10 6 2 3 -1 -1 -1 -1 -1 9 -1 -1
// 8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1

int main()
{
    BinaryTreeNode<int> *root = NULL;
    root = create(root);
    int c = largestBSTSubtree(root);
    cout << c;
    delete root;
    

    return 0;
}