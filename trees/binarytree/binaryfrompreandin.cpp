#include <iostream>
#include <cstring>
#include <queue>
#include "constructor1.h"

// BinaryTreeNode<int> *buildTree(int *preorder, int preLength, int *inorder, int inLength)
// {
//     // Write your code here
//     if (preLength == 0)
//     {
//         return NULL;
//     }
//     BinaryTreeNode<int> *root = new BinaryTreeNode<int>(preorder[0]);
//     int c;
//     for (int i = 0; i < inLength; i++)
//     {
//         /* code */
//         if (root->data == inorder[i])
//         {
//             c = i;
//             break;
//         }
//     }
//     BinaryTreeNode<int> *leftchild = buildTree(preorder + 1, c, inorder, c);
//     root->left = leftchild;
//     BinaryTreeNode<int> *rightchild = buildTree(preorder + c + 1, preLength - (c + 1), inorder + c + 1, inLength - (c + 1));
//     root->right = rightchild;
//     return root;
// }

BinaryTreeNode<int> *buildtree(int *postorder, int postLength, int *inorder, int inLength)
{
    // Write your code here
    if (postLength == 0)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(postorder[postLength - 1]);
    int c;
    for (int i = 0; i < inLength; i++)
    {
        /* code */
        if (root->data == inorder[i])
        {
            c = i;
            break;
        }
    }
    BinaryTreeNode<int> *leftchild = buildtree(postorder, c, inorder, c);
    root->left = leftchild;
    BinaryTreeNode<int> *rightchild = buildtree(postorder+c,postLength-(c+1) ,inorder + c + 1, inLength - (c + 1));
    root->right = rightchild;
    return root;
}
using namespace std;
int main()
{

    return 0;
}