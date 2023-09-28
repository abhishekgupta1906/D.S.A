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
int main()
{

return 0;
}