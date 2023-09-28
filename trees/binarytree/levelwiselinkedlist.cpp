#include <iostream>
#include <cstring>
#include <queue>
#include "constructor1.h"
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
vector<Node<int> *> constructLinkedListForEachLevel(BinaryTreeNode<int> *root)
{
    vector<Node<int> *> v = {NULL};
    if (root == NULL)
    {
        return v;
    }
    v.clear();
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);
    Node<int> *head = NULL;
    Node<int> *last = NULL;
    while (!q.empty())
    {
        BinaryTreeNode<int> *f = q.front();
        q.pop();
        if (f != NULL)
        {
            if (f->left != NULL)
            {
                q.push(f->left);
            }
            if (f->right != NULL)
            {
                q.push(f->right);
            }
            Node<int> *t = new Node<int>(f->data);
            if (head == NULL)
            {
                head = t;
                last =head;
            }
            else
            {
                last->next = t;
                last = t;
            }
        }
        else
        {
            v.push_back(head);
            if (!q.empty())
            {
                head = NULL;
                last = NULL;
                q.push(NULL);
            }
        }
    }
    return v;

    // Write your code here
}
void print(Node<int> *head)
{
    Node<int> *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// 5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
int main()
{
    
    

    return 0;
}