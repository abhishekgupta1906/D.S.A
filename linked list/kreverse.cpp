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
Node *reverseLinkedListRec(Node *head)
{
    // Write your code here
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *otherhead = reverseLinkedListRec(head->next);
    // reversed linked list ka head
    // head ke pass naya linked ka last node ka address h
    Node *t = head->next;
    t->next = head;
    head->next = NULL;
    return otherhead;
}
Node *kReverse(Node *head, int k)
{
    // Write your code here
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    

    Node *head1 =head;
    Node *tail1 =head;
    int pos = 1;
    while (pos < k && tail1->next)
    {
        tail1 = tail1->next;
        pos++;
    }
    Node *head2 = tail1->next;
    tail1->next = NULL;
    tail1=reverseLinkedListRec(head1);
    head2=kReverse(head2,k);
    
    head1->next = head2;
    return tail1;

}

        
       

void print(Node *head)
{
    Node *t = head;
    while (t != NULL)
    {
        cout << t->data << "->";
        t = t->next;
    }
    cout << "-1";
}

int main()
{
   

    return 0;
}