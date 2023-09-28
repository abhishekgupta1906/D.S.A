#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*next;
}*first=NULL;
// FIRST is the name of pointer pointing first node

void createkro(int arr[],int n)
{
    struct Node*t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for (int i = 1; i <n; i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    
    }
    free(t);
}



void dikhao(struct Node*p)
{
    p=first;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
   
}

void reverse(struct Node*p,int n)
{
    int*arr;
    arr=(int*)malloc(n*sizeof(int));
    
    int i=0;
    p=first;
    while (p!=NULL)
    {
        arr[i]= p->data;
        p=p->next;
        i++;
        
    }

    p=first;
    i--;

    while (p!=NULL)
    {
        p->data=arr[i];
        p=p->next;
        i--;
        
    }



    
}


int main()
{
    // int A[]={2,5,8,9,0,3};
    // createkro(A,6);
    // dikhao(first);
    // printf("\n");
    // reverse(first,6);
    // dikhao(first);
    
    
    

return 0;
}