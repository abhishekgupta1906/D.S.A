#include<iostream>
#include<cstring>
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
void replace_WithDepthValue(TreeNode<int> *root,int depth) {
    if(root==NULL)
    {
        return ;
    }
    root->data=depth;
    for (int i = 0; i <root->children.size(); i++)
    {
        replace_WithDepthValue(root->children[i],depth+1);
        /* code */
    }
    
   
  // Write your code here
  
}


void replaceWithDepthValue(TreeNode<int> *root) {
  // Write your code here
  replace_WithDepthValue(root,0);
  
}

// pura tree ka depth lake de rha h
int main()
{
    TreeNode<int>*root=NULL;
    root=create(root);
    
  


return 0;
}

    