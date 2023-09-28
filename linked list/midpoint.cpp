#include<iostream>
#include<cstring>
using namespace std ;
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
Node *midPoint(Node *head1)
{
    // Write your code here
    Node*t=head1;
    // slow
    Node*p=head1->next;
    // fast
    while(p!=NULL && p->next!=NULL)
    {
        t=t->next;
        p=p->next->next;
    }
    // cout<<t->data;
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

int main()
{
    int a[6]={10,20,30,40};
    Node*head1=create(a,4);
    head1=midPoint(head1);
    print(head1);
    delete head;
    


    


return 0;
}