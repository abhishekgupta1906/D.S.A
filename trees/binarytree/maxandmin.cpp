#include <iostream>
#include <cstring>
#include <queue>
#include "constructor1.h"
#include<climits>
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
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root)
{
    // Write your code here
    if (root == NULL)
    {
        pair<int, int> p;
        p.first =INT16_MAX;
        p.second =INT16_MIN;
        return p;
    }
    
    pair<int, int> leftans = getMinAndMax(root->left);
    pair<int, int> rightans = getMinAndMax(root->right);
    int leftmin = leftans.first;
    int leftmax = leftans.second;
    int rightmin = rightans.first;
    int rightmax = rightans.second;
    pair<int, int> ans;
    ans.first = min(root->data, min(leftmin, rightmin));
    ans.second = max(root->data, max(leftmax, rightmax));
    return ans;
}
// 10 40 60 70 30 -1 -1 100 -1 -1 200 -1 -1 -1 -1
int main()
{
    BinaryTreeNode<int>*root=NULL;
    root=create(root);
    pair<int,int>ans=getMinAndMax(root);
    cout<<"safal"<<endl;
    cout<<"Min:"<<ans.first<<" "<<"Max:"<<ans.second;
    delete root;

    return 0;
}