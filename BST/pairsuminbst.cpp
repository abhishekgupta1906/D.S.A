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
void intoArray(BinaryTreeNode<int> *root, vector<int> &arr) {
  if (root == NULL) {
    return;
  }
  intoArray(root->left, arr);
  arr.push_back(root->data);
  intoArray(root->right, arr);
}

void printNodesSumToS(BinaryTreeNode<int> *root, int s) {
    // Write your code here
    vector<int>arr;
    intoArray(root,arr);
    int i=0;
    int j=arr.size()-1;
    while(i<j)
    {
        if(arr[i]+arr[j]==s)
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]<s)
        {
            i++;
        }
        else
        {
            j--;
        }
        
    }
}
// 8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
int main()
{
    BinaryTreeNode<int> *root = NULL;
    root = create(root);
    printNodesSumToS(root,12);
    
    
    delete root;
    

    return 0;
}