#include <iostream>
#include <cstring>
using namespace std;
// 1. constructor
// You need to create the appropriate constructor. Size for the queue passed is 10.
// 2. insertFront -
// This function takes an element as input and insert the element at the front of queue. Insert the element only if queue is not full. And if queue is full, print -1 and return.
// 3. insertRear -
// This function takes an element as input and insert the element at the end of queue. Insert the element only if queue is not full. And if queue is full, print -1 and return.
// 4. deleteFront -
// This function removes an element from the front of queue. Print -1 if queue is empty.
// 5. deleteRear -
// This function removes an element from the end of queue. Print -1 if queue is empty.
// 6. getFront -
// Returns the element which is at front of the queue. Return -1 if queue is empty.
// 7. getRear -
// Returns the element which is at end of the queue. Return -1 if queue is empty.
class Deque
{
    // Complete this class
    int *data;
    int firstindex;
    int nextindex;
    int size;
    Deque()
    {
        firstindex = -1;
        nextindex = 0;
        size = 10;
    }
    bool isempty()
    {
        if (firstindex == -1 && nextindex == 0)
        {
            return true;
        }
        return false;
    }
    void insertFront(int element)
    {
        if (size == nextindex)
        {
            cout << -1;
            return;
        }
        data[firstindex] = element;

        firstindex--;
    }

    void insertRear(int element)
    {
        if (isempty())
        {
            data[nextindex] = element;
            firstindex++;
            nextindex++;
            return;
        }
        if (nextindex == size)
        {
            cout << -1;
            return;
        }

        data[nextindex] = element;
        nextindex++;
    }
    void deleteFront()
    {
        if (isempty())
        {
            cout << -1;
            return;
        }

        firstindex++;
    }

    int deleteRear()
    {
        if (isempty())
        {
            cout << -1;
            return;
        }
        nextindex--;
    }
    int getRear()
    {
        if (isempty())
        {
            return -1;
        }

        return data[nextindex];    
    }

    int getFront()
    {
        if (isempty())
        {
            return -1;
        }

        return data[firstindex];
    }

            
};

int main()
{

    return 0;
}