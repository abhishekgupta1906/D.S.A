#include <iostream>
#include <cstring>
#include <queue>
#include "constructorbst.h"
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
BinaryTreeNode<int>* construct_Tree(int *input, int si,int ei) 
{
	// Write your code here
    if(si>ei)
    {
        return NULL;
    }
    int mid=(si+ei)/2;
    BinaryTreeNode<int>*root=new BinaryTreeNode<int>(input[mid]);
    BinaryTreeNode<int>*lefttree=construct_Tree(input,si,mid-1);
    BinaryTreeNode<int>*righttree=construct_Tree(input,mid+1,ei);
    root->left=lefttree;
    root->right=righttree;
    return root;

}

int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    BinaryTreeNode<int>*root=construct_Tree(arr,0,6);
    printLevelWise(root);
    delete root;
    
}