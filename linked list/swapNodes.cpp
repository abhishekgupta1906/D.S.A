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

Node *swapNodes(Node *head, int i, int j)
{
    Node*si=head;
    // ith position
    Node*pi=NULL;
    Node*sj=head;
    Node*pj=NULL;
    // ith position pr pauchna
    // jth pos pr pauncha
    for (int m = 0; m <i; m++)
    {
        pi=si;
        si=si->next;

        /* code */
    }
    for (int m= 0; m <j; m++)
    {
        pj=sj;
        sj=sj->next;
        /* code */
    }
    if(pi!=NULL)
    {
        pi->next=sj;
    }
    else
    {
        head=sj;
    }
    if(pj!=NULL)
    {
        pj->next=si;
    }
    Node*t=sj->next;
    sj->next=si->next;
    pj->next=si;
    si->next=t;
    return head;



    
}
    

    
    

void print(Node *head)
{
    Node *t = head;
    while (t != NULL)
    {
        cout << t->data << "->";
        t = t->next;
    }
}

int main()
{
   

   

    return 0;
}