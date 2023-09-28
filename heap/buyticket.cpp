#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
// question me hmko ticket (konsa index ex-3) milne me kitna time lgega ye nikalna aur kuch condition
// array diya hua h priority values ka
// queue me index insert krna kyuki kuch index ka same value h
int buyTicket(int *arr, int n, int k)
{
    int t = 1;
    queue<int> q;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        q.push(i);
        pq.push(arr[i]);
        /* code */
    }
    
    // rukna tb h jb q.front==k and pq.top=arr[q.front]
    int c = q.front();
    int b = pq.top();

    while (c!= k || b!=arr[c])
    {
        if (arr[c] < b)
        {
            int b = q.front();
            q.pop();
            q.push(b);
            c = q.front();
            b = pq.top();
        }
        else
        {
            q.pop();
            pq.pop();
            t++;
            c = q.front();
            b = pq.top();
        }
    }
    return t;

    // Write your code here
}
int main()
{
    int arr[5] = {2,3,2,2,4};
    int d = buyTicket(arr,5,3);
    cout << d;

    return 0;
}