#include <iostream>
#include <cstring>
#include "constructor.h"
#include <queue>
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
class Pair
{
public:
    TreeNode<int> *max;
    TreeNode<int> *smax;
};
Pair get_secondlargest(TreeNode<int> *root)
{
    Pair ans;
    if (root == NULL)
    {
        ans.max = NULL;
        ans.smax = NULL;
        return ans;
    }
    if (root->children.size() == 0)
    {
        ans.max = root;
        ans.smax = NULL;
        return ans;
    }
    ans.max = root;
    ans.smax = NULL;
    for (int i = 0; i < root->children.size(); i++)
    {
        Pair smallans = get_secondlargest(root->children[i]);
        if (ans.max->data < smallans.max->data)
        {
          if(ans.smax==NULL)
          {
            ans.smax=ans.max;
            ans.max=smallans.max;
          }
          else if(ans.max->data<smallans.smax->data)
          {
            ans.smax=smallans.smax;
            ans.max=smallans.max;
          }
          else
          {
            ans.smax=ans.max;
            ans.max=smallans.max;

          }
          

        }
        else
        {
            if(ans.max->data!=smallans.max->data && (ans.smax==NULL || ans.smax->data < smallans.max->data))
            {
                ans.smax=smallans.max;
            }
        }

        /* code */
    }
    return ans;
}

TreeNode<int> *getSecondLargestNode(TreeNode<int> *root)
{
    if(root==NULL)
    {
        return NULL;
    }
    Pair ans=get_secondlargest(root);
    return ans.smax;

    // Write your code here
}
int main()
{
    TreeNode<int> *root = NULL;
    root = create(root);
    TreeNode<int> *t = getSecondLargestNode(root);
    cout << t->data;

    return 0;
}