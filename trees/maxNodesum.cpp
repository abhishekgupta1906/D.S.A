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
int maxNodesum(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int sum = root->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        /* code */
        sum = sum + root->children[i]->data;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        /* code */
        int a = maxNodesum(root->children[i]);
        if (a > sum)
        {
            sum = a;
        }
    }
    return sum;
}
TreeNode<int> *maxSumNode(TreeNode<int> *root)
{
    // Write your code here
    if (root->children.size() == 0)
    {
        return root;
    }
    if (root == NULL)
    {
        return root;
    }
    int sum = root->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        /* code */
        sum = sum + root->children[i]->data;
    }
    TreeNode<int> *f = root;
    for (int i = 0; i < root->children.size(); i++)
    {
        TreeNode<int> *t = maxSumNode(root->children[i]);
        int sum1 = t->data;
        for (int j = 0; j < t->children.size(); j++)
        {
            sum1 = sum1 + t->children[j]->data;
            /* code */
        }
        if (sum1 > sum)
        {
            sum = sum1;
            f = t;
        }

        /* code */
    }
    return f;
}

int main()
{
    TreeNode<int> *root = NULL;
    root = create(root);
    int b = maxNodesum(root);
    cout << b;
    delete root;

    return 0;
}