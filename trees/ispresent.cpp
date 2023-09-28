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
bool isPresent(TreeNode<int>* root, int x) {
    // Write your code here
    if(root->data==x)
    {
        return true;
    }
    bool b;
    for (int i = 0; i <root->children.size(); i++)
    {
        b=isPresent(root->children[i],x);
        
        if(b)
        {
            break;
        }
        /* code */
    }
    return b;
    
    
}
// shift insert

int main()
{
    TreeNode<int> *root = NULL;
    root = create(root);
    bool a=isPresent(root,20);
    cout<<a;
    
    delete root;

    return 0;
}