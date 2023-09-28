#include <iostream>
#include <cstring>
#include <queue>
#include "constructor.h"
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
        for (int i = 0; i < front->children.size(); i++)
        {
            pendingNodes.push(front->children[i]);
        }
        /* code */
    }
}
using namespace std;
int main()
{

    return 0;
}