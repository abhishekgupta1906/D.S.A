#include<iostream>
#include<cstring>
#include<queue>
#include"constructor.h"
using namespace std ;
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

void printPostOrder(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL)
    {
        return ;
    }
    for (int i = 0; i <root->children.size(); i++)
    {
        printPostOrder(root->children[i]);

        /* code */
    }
    cout<<root->data<<" ";
    
    
}
// 10 3 20 30 40 2 400 50 0 0 0 0 
int main()
{
    TreeNode<int>*root=NULL;
    root=create(root);
    printPostOrder(root);
    delete root;
    
    

return 0;
}