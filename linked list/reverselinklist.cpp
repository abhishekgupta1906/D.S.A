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
void print(Node*head1)
{
    Node *t = head1;
    while (t != NULL)
    {
        cout << t->data << "->";
        t = t->next;
    }
}
Node *reverseLinkedList(Node *head) {
    // Write your code here
	// Node*p=head;
	// Node*q=NULL;
	// Node*r=NULL;
	// while(p!=NULL)
	// {
	// 	r=q;
	// 	q=p;
	// 	p=p->next;
	// 	q->next=r;
	// }
	// head=q;
	// return head;
    Node*prev=NULL;
    Node*current=head;
    while(current!=NULL)
    {
       Node*t=current->next;
       current->next=prev;
       prev=current;
       current=t;
       
    }
    head=prev;
    return head;
}
Node *reverseLinkedListRec(Node *head)
{
    //Write your code here
    if(head==NULL || head->next==NULL)
    {
        return head;

    }
    Node*otherhead= reverseLinkedListRec(head->next);
    // reversed linked list ka head
    // head ke pass naya linked ka last node ka address h
    Node*t=head->next;
    t->next=head;
    head->next=NULL;
    return otherhead;
}
int main()
{
    int a[6]={10,20,30,40,50,60};
    head=create(a,6);
    head=reverseLinkedListRec(head);
    print(head);
    delete head;
    



return 0;
}
