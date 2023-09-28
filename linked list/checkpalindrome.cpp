#include <iostream>
#include <cstring>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // pointer to next node
    // constructor
    Node(int m)
    {
        this->data = m;
        this->next = NULL;
        // AAGE KOI NODE NHI H
    }
} *head = NULL;
Node *create(int arr[], int size)
{

    Node *last = NULL;
    head = new Node(arr[0]);
    last = head;
    for (int i = 1; i < size; i++)
    {
        /* code */
        Node *t = new Node(arr[i]);
        last->next = t;
        last = t;
    }
    return head;
}
Node *midPoint(Node *head)
{
    // Write your code here
    Node *t = head;
    // slow
    Node *p = head->next;
    // fast
    while (p != NULL && p->next != NULL)
    {
        t = t->next;
        p = p->next->next;
    }

    return t;
}
bool isPalindrome(Node *head)
{
    // Write your code here
    if (head == NULL || head->next == NULL)
    {
        return true;
    }
    // mtlb jb ek node ya fir koi node nhi

    Node *head2 = NULL;
    // break
    Node *t = midPoint(head);
    head2 = t->next;
    t->next = NULL;
    // head2 wale ko reverse
    Node *p = head2;
    Node *q = NULL;
    Node *r = NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        //
        q->next = r;
    }
    head2 = q;
    // run krke dekho
    //
    Node *m = head2;
    Node *n = head;
    while (m != NULL && n != NULL)
    {
        if (m->data != n->data)
        {
            return false;
        }
        else
        {
            m = m->next;
            n = n->next;
        }
    }
    return true;
}
int main()
{
    

    return 0;
}