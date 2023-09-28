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
Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{

    Node *last = NULL;
    if (head1 == NULL && head2 == NULL)
    {
        return head;
    }
    else if (head1 == NULL && head2 != NULL)
    {
        head = new Node(head2->data);
        last = head;
        head2 = head2->next;

        while (head2->next != NULL)
        {
            Node *t = new Node(head2->data);
            last->next = t;
            last = t;
            head2 = head2->next;
        }
        return head;
    }
    else if (head1 != NULL && head2 == NULL)
    {
        head = new Node(head1->data);
        last = head;
        head1 = head1->next;

        while (head1 != NULL)
        {
            Node *t = new Node(head1->data);
            last->next = t;
            last = t;
            head1 = head1->next;
        }
        return head;
    }

    // first node
    if (head1->data < head2->data)
    {
        head = new Node(head1->data);
        last = head;
        head1 = head1->next;
    }
    else
    {
        head = new Node(head2->data);
        last = head;
        head2 = head2->next;
    }
    // reamining node
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data < head2->data)
        {
            Node *t = new Node(head1->data);
            last->next = t;
            last = t;
            head1 = head1->next;
        }

        else
        {
            Node *t = new Node(head2->data);
            last->next = t;
            last = t;
            head2 = head2->next;
        }
    }
    // man lo ek khatam ho gya dusra bacha hua
    while (head1 != NULL)
    {
        Node *t = new Node(head1->data);
        last->next = t;
        last = t;
        head1 = head1->next;
    }
    while (head2 != NULL)
    {
        Node *t = new Node(head2->data);
        last->next = t;
        last = t;
        head2 = head2->next;
    }

    return head;

    // Write your code here
}

Node *mergeSort(Node *head)
{
    // Write your code here
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *mid = midPoint(head);
    // break
    head1 = head;
    head2 = mid->next;
    mid->next = NULL;
    // mergesort on both head1 and head2
    head1 = mergeSort(head1);
    head2 = mergeSort(head2);
    head = mergeTwoSortedLinkedLists(head1, head2);
    return head;
}

int main()
{
   

    return 0;
}
