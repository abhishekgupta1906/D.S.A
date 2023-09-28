#include <iostream>
#include <cstring>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class Queue
{
    // Define the data members
    Node *head;
    Node *last;
    int size;

public:
    Queue()
    {
        // Implement the Constructor
        head = NULL;
        last = NULL;
        size = 0;
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize()
    {
        // Implement the getSize() function
        return size;
    }

    bool isEmpty()
    {
        // Implement the isEmpty() function
        if (head == NULL)
        {
            return true;
        }
        return false;
    }

    void enqueue(int data)
    {
        // Implement the enqueue() function
        if (head == NULL)
        {
            head = new Node(data);
            last = head;
            size++;
            return;
        }
        Node *t = new Node(data);
        last->next = t;
        last = t;
        size++;
    }

    int dequeue()
    {
        // Implement the dequeue() function
        int x = -1;
        if (isEmpty())
        {
            return x;
        }
        x = head->data;
        head = head->next;
        size--;
        return x;
    }

    int front()
    {
        // Implement the front() function

        if (isEmpty())
        {
            return -1;
        }
        return head->data;
    }
};
int main()
{
    // Queue s1;
    // s1.enqueue(20);
    // s1.dequeue();
    // s1.enqueue(30);
    // s1.enqueue(40);
    // int a = s1.front();
    // cout << a;

    return 0;
}