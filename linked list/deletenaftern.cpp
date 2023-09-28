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
Node *skipMdeleteN(Node *head, int M, int N)
{
	// Write your code here
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node*p=head;
    int pos=1;
    while(pos<M && p) 
    {
        p=p->next;
        pos++;
    }

    Node*r=p->next;
    for (int i = 0; i <N &&r; i++)
    {
        p->next=r->next;
        r=p->next;
        /* code */
    }
    r=skipMdeleteN(r,M,N);
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
    int a[6] = {10, 9, 90, 5, 67, 1};
    head = create(a, 6);
    

    return 0;
}