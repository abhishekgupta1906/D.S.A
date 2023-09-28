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
vector<int>* getPath(BinaryTreeNode<int> *root , int data) {
	// Write your code here
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==data)
    {
        vector<int>*t=new vector<int>;
        t->push_back(root->data);
        return t;
    }
    else if(data<root->data)
    {
        vector<int>*leftoutput=getPath(root->left,data);
        if(leftoutput!=NULL)
        {
            leftoutput->push_back(root->data);
            return leftoutput;
        }
    }
    else
    {
        vector<int>*rightoutput=getPath(root->right,data);
        if(rightoutput!=NULL)
        {
            rightoutput->push_back(root->data);
            return rightoutput;
        }
        else
        {
            return NULL;
        }
    }
    
}
// 8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
int main()
{
    BinaryTreeNode<int> *root = NULL;
    root = create(root);
    printLevelWise(root);
    vector<int>*output=getPath(root,2);
    for (int i = 0; i <output->size(); i++)
    {
        /* code */
        cout<<output->at(i)<<endl;

    }
    

    delete root;
    delete output;

    return 0;
}