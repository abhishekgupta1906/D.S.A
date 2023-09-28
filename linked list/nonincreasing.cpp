#include<iostream>
#include<string>
#include<vector>
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

Node *findlongestNode(Node*head)
{
    Node * t=head;
    Node*f=head->next;
    Node*p=NULL;
    int len=1;
    int maxlen=1;
    bool a=false;
    while(f!=NULL)
    {
        if(t->data >=f->data)
        {
            len++;
        }
        else
        {
            len=1;
            a=false;
        }
        if(maxlen<=len)
        {
            maxlen=len;
            if(a==false)
            {
                a=true;
                p=t;
            }
        }
        t=f;
        f=f->next;

    }
    return p;


}
int main()
{
    // sub arrays
   
    

    
    
return 0;
}