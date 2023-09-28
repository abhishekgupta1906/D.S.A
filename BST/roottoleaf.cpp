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
void root_ToLeafPathsSumToK(BinaryTreeNode<int> *root, int k, vector<int> &v)
{
    // Write your code here
    if (root == NULL)
    {
        return;
    }
    v.push_back(root->data);
    if (root->left == NULL && root->right == NULL)
    {
        if (root->data == k)
        {
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
                /* code */
            }
            cout<<endl;
        }
        v.pop_back();
        return ;
    
    }
    root_ToLeafPathsSumToK(root->left, k - root->data,v);
    root_ToLeafPathsSumToK(root->right, k - root->data,v);
    v.pop_back();
}


void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k)
{
    vector<int>v;
    root_ToLeafPathsSumToK(root,k,v);
    // Write your code here
}
// 2 3 9 4 8 -1 2 4 -1 -1 -1 6 -1 -1 -1 -1 -1
// 13
int main()
{
    BinaryTreeNode<int> *root = NULL;
    root = create(root);
    
    rootToLeafPathsSumToK(root,13);
    delete root;

   

    return 0;
}