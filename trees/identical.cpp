#include<iostream>
#include<cstring>
#include"constructor.h"
#include<queue>
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
bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    // Write your code here
    if(root1==NULL ||root2==NULL)
    {
        return false;
    }
    if(root1==NULL && root2==NULL)
    {
        return true;
    }
    if(root1->data!=root2->data ||root1->children.size()!=root2->children.size())
    {
        return false;
    }
    bool b=true;
    for (int i = 0; i <root1->children.size() && i<root2->children.size(); i++)
    {
        /* code */
        b=areIdentical(root1->children[i],root2->children[i]);

    }
    return b;
    

}
   
    
//  10 3 20 30 40 2 400 50 0 0 0 0 
// 10 4 20 30 40 50 2 400 50 0 0 0 0 

int main()
{
    TreeNode<int>*root1=NULL;
    TreeNode<int>*root2=NULL;
    root1=create(root1);
    root2=create(root2);
    bool a=areIdentical(root1,root2);
    cout<<a;
    delete root1;
    delete root2;





return 0;
}