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

TreeNode<int> *getNextLargerElement(TreeNode<int> *root, int x)
{
    // Write your code here
    if (root == NULL)
    {
        return root;
    }
    TreeNode<int> *f = NULL;
    if (root->data > x)
    {
        f = root;
    }

    for (int i = 0; i < root->children.size(); i++)
    {
        TreeNode<int> *t = getNextLargerElement(root->children[i], x);
        if (t == NULL)
        {
            continue;
        }
        else
        {
            if (f == NULL)
            {
                f = t;
            }
            else if (t->data < f->data)
            {
                f = t;
            }
        }

        /* code */
    }
    return f;
}
// 10 3 20 30 40 2 40 50 0 0 0 0
// 21

int main()
{
    TreeNode<int> *root = NULL;
    root = create(root);
    int a = 21;
    TreeNode<int> *t = getNextLargerElement(root, a);
    cout << t->data;

    return 0;
}