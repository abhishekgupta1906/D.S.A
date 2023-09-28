#include <iostream>
#include <cstring>
#include <queue>
#include "constructor.h"
using namespace std;

TreeNode<int> *create(TreeNode<int> *root)
{
    // Write your code here
    int rootdata;
    cout << "Enter data:" << endl;
    cin >> rootdata;
    root = new TreeNode<int>(rootdata);
    queue<TreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode<int> *front = q.front();
        q.pop();
        cout << "Enter the number of children:" << front->data << endl;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            /* code */
            int childata;
            cout << "Enter" << i << "th child:" << front->data << endl;
            cin >> childata;
            TreeNode<int> *child = new TreeNode<int>(childata);
            front->children.push_back(child);
            q.push(child);
        }
    }
    return root;
}
TreeNode<int>* removeLeafNodes(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL)
    {
        return NULL;
    }
    if(root->children.size()==0)
    {
        delete root;
        return NULL;
    }
    for (int i = 0; i <root->children.size(); i++)
    {
        TreeNode<int>*t=removeLeafNodes(root->children[i]);
        root->children.push_back(t);
        /* code */
    }
    return root;
    

}
void printLevelWise(TreeNode<int> *root)
{
    // Write your code here
    if (root == NULL)
    {
        return;
    }
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty())
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << front->data << ":";
        for (int i = 0; i < front->children.size(); i++)
        {
            /* code */
            if (i == front->children.size() - 1)
            {
                cout << front->children[i]->data;
                break;
            }
            cout << front->children[i]->data << ",";
        }
        cout<<endl;
        for (int i = 0; i < front->children.size(); i++)
        {
            pendingNodes.push(front->children[i]);
        }
        /* code */
    }
}
// 10 3 20 30 40 2 40 50 0 0 0 0 
// 


int main()
{
    TreeNode<int> *root = NULL;
    root = create(root);
    root=removeLeafNodes(root);
    printLevelWise(root);

    
    delete root;

    return 0;
}