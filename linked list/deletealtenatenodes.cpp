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
void deleteAlternateNodes(Node *head) {
    //Write your code here
    if(head==NULL||head->next==NULL)
    {
        return ;

    }
    Node*t=head->next;
    head->next=t->next;
    deleteAlternateNodes(head->next);
}
Node* NextLargeNumber(Node *head) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    if(head==NULL)
    {
        return head;
    }
    Node*p=NULL;
    Node*t=head;
    while(t!=NULL)
    {
        p=t;
        t=t->next;
    }
    if(t->data!=9)
    {
        t->data=t->data+1;
    }
    return head;
   
    
    
}
int main()
{

return 0;
}