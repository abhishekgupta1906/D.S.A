#include <iostream>
#include <cstring>
using namespace std;
class Node
{

public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    void print(Node *head, int i)
    {
        int pos = 0;
        Node *t = head;
        if (t == NULL)
        {
            return;
        }
        if (i == pos)
        {
            cout << t->data;
        }
        else
        {
            pos = pos + 1;
            print(t->next, i);
        }
    }

    Node *insertNode(Node *head, int i, int data)
    {
        if (head == NULL)
        {
            return head;
        }
        if (i == 0)
        {
            Node *t = new Node(data);
            t->next = head;
            head = t;
            return t;
        }
        else
        {
            Node *t = insertNode(head->next, i - 1, data);
            return t;
        }
        // Write your code here
    }

    Node *deleteNode(Node *head, int pos)
    {
        // Write your code here.
        if (head == NULL)
        {
            return head;
        }
        if (pos == 0)
        {
            Node *t = head;
            head = head->next;
            return head;
        }
        else
        {
            Node *t = head;
            Node *previous = NULL;
            for (int i = 1; i < pos && t != NULL; i++)
            {
                previous=t;
                t = t->next;
                /* code */
            }

            if (t != NULL)
            {
                previous->next = t->next;
            }

            return head;
        }
    }
};
int main()
{

    return 0;
}
