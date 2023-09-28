#include<iostream>
#include<cstring>
using namespace std ;
 class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};
class Stack {
	// Define the data members
    Node*head;
    int capacity;
   public:
    Stack() {
        // Implement the Constructor
        head=NULL;
        capacity=0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function
        return this->capacity;
    }

    bool isEmpty() {
        // Implement the isEmpty() function
        if(head==NULL)
        {
            return true;
        }
        return false;
    }

    void push(int element) {
        // Implement the push() function
        if(isEmpty())
        {
            head=new Node(element);
            capacity++;
            return ;
        }
        Node*t=new Node(element);
        t->next=head;
        head=t;
        capacity++;


    }

    int pop() {
        // Implement the pop() function
        int x=-1;
        if(isEmpty())
        {
            return x;
        }
        x=head->data;
        head=head->next;
        capacity--;
        return x;

    }

    int top() {
        // Implement the top() function
       
        if(isEmpty())
        {
            return -1;
        }
        return head->data;

    }
};
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
// class Stack {
// 	// Define the data members
//    public:
//     Stack() {
//         // Implement the Constructor
//     }

// 	/*----------------- Public Functions of Stack -----------------*/

//     int getSize() {
//         // Implement the getSize() function
//     }

//     bool isEmpty() {
//         // Implement the isEmpty() function
//     }

//     void push(int element) {
//         // Implement the push() function
//     }

//     int pop() {
//         // Implement the pop() function
//     }

//     int top() {
//         // Implement the top() function
//     }
// };
return 0;
}