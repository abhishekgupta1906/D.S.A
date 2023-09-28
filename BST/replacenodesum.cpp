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
int replace(BinaryTreeNode<int>*root,int sum)
{
    if(root==NULL)
    {
        return sum;
    }
    sum=replace(root->right,sum);
    sum=root->data+sum;
    root->data=sum;
    sum=replace(root->left,sum);
    return sum;

}    
void replaceWithLargerNodesSum(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL)
    {
        return ;
    }
   
    replace(root,0);
    


}
// 8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
int main()
{
    BinaryTreeNode<int> *root = NULL;
    root = create(root);
    
    
    delete root;
    

    return 0;
}