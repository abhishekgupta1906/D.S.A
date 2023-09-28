#include <iostream>
#include "constructor2.h"
using namespace std;
class BST
{
    // Define the data members
    BinaryTreeNode<int> *root;

public:
    BST()
    {
        // Implement the Constructor
        root = NULL;
    }

    /*----------------- Public Functions of BST -----------------*/
private:
    BinaryTreeNode<int> *deletedata(int data, BinaryTreeNode<int> *node)
    {
        if (root == NULL)
        {
            return NULL;
        }
        if (data < root->data)
        {
            node->left = deletedata(data, node->left);
            return node;
        }
        else if (data > root->data)
        {
            node->right = deletedata(data, node->right);
            return node;
        }
        else
        {
            if (node->left == NULL && node->right == NULL)
            {
                return NULL;
            }
            else if (node->left == NULL)
            {
                BinaryTreeNode<int> *t = node->right;
                node->right == NULL;
                delete node;
                node = t;
                return node;
            }
            else if (node->right == NULL)
            {
                BinaryTreeNode<int> *t = node->left;
                node->eft = NULL;
                delete node;
                node = t;
                return node;
            }
            else
            {
                BinaryTreeNode<int> *min = node->right;
                BinaryTreeNode<int> *t = node->right->left;
                while (t != NULL)
                {
                    if (t->data < min->data)
                    {
                        min = t;
                    }
                    else
                    {
                        t = t->left;
                    }
                }
                node->data = min->data;
                int rightmin = min->data;
                node->right = deletedata(, min);
                return node;
            }
        }
    }

public:
    void remove(int data)
    {
        root = deletedata(data, root);
        // Implement the remove() function
    }

    void print()
    {

        if (root == NULL)
        {
            return;
        }
        cout << root->data << ":";
        if (root->left != NULL)
        {
            cout << "L:" << root->left->data << ",";
        }

        if (root->right != NULL)
        {
            cout << "R:" << root->right->data;
        }
        cout << endl;
        printTree(root->left);
        printTree(root->right);
        // Implement the print() function
    }

private:
    BinaryTreeNode<int> *insertData(int data, BinaryTreeNode<int> *node)
    {
        if (node == NULL)
        {
            BinaryTreeNode<int> *t = new BinaryTreeNode<int>(data);
            node = t;
            return node;
        }
        if (data <= node->data)
        {
            node->left = insertData(data, node->left);
            return node;
        }
        else
        {
            node->right = insertData(data, node->right);
            return node;
        }
    }

public:
    void insert(int data)
    {
        root = insertData(data, root);
        // Implement the insert() function
    }

private:
    bool hasData(int data, BinaryTreeNode<int> *node)
    {
        if (node == NULL)
        {
            return false;
        }

        if (node->data == data)
        {
            return true;
        }
        else if (data < node->data)
        {
            return hasData(data, node->left);
        }
        else
        {
            return hasData(data, node->right);
        }
    }

public:
    bool search(int data)
    {
        bool b = hasData(data, root);
        return b;

        // Implement the search() function
    }
};
