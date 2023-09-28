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
Node *evenAfterOdd(Node *head)
{
    // write your code here
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *t = head;
    Node *oddhead = NULL;
    Node *oddlast = NULL;
    Node *evenhead = NULL;
    Node *evenlast = NULL;
    while (t != NULL)
    {
        Node*newNode=new Node(t->data);
        if (t->data % 2 == 1)
        {
            if (oddhead == NULL)
            {
               
                oddhead=newNode;
                oddlast = oddhead;
            }
            oddlast->next = newNode;
            oddlast = newNode;
            t=t->next;
        }

        else
        {
            if (evenhead == NULL)
            {
                evenhead = newNode;
                evenlast =evenhead;
            }
            evenlast->next = newNode;
            evenlast = newNode;
            t=t->next;
        }
    }
    if(oddhead==NULL)
    {
        return evenhead;
    }
    oddlast->next=evenhead;
    
    return oddhead;
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