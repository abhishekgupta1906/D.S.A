#include <iostream>
#include <cstring>
using namespace std;
// /sare node dynamic object h
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
    Node*head1=NULL;
   
    Node *last = NULL;
    head1 = new Node(arr[0]);
    last = head1;
    for (int i = 1; i < size; i++)
    {
        /* code */
        Node *t = new Node(arr[i]);
        last->next = t;
        last = t;
    }
    return head1;

}
void print(Node*head1)
{
    Node *t = head1;
    while (t != NULL)
    {
        cout << t->data << "->";
        t = t->next;
    }
}
Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    
    Node *last = NULL;
    // first node
    if (head1->data < head2->data)
    {
        head = new Node(head1->data);
        last = head;
        head1 = head1->next;
    }
    else
    {
        head= new Node(head2->data);
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

int main()
{
    // Node*head3=mergeTwoSortedLinkedLists(head1,head2);
    // print(head3);
    // head=mergeTwoSortedLinkedLists(head1,head2);
    // print(head);


    return 0;
}
