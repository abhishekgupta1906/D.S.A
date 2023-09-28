#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
void findMedian(int *arr, int n)
{
    priority_queue<int> p;
    priority_queue<int, vector<int>, greater<int>> q;
    for (int i = 0; i < n; i++)
    {
        if (p.size() == 0 && q.size() == 0)
        {
            p.push(arr[i]);
            int b = p.top();
            cout << b << " ";
        }
        else if (arr[i] < p.top())
        {
            p.push(arr[i]);
            if ((p.size() - q.size()) > 1)
            {
                int b = p.top();
                p.pop();
                q.push(b);
            }
            if ((p.size() - q.size()) == 1)
            {
                int b = p.top();
                cout << b << " ";
            }
            else
            {
                int b = p.top();
                int c = q.top();
                int d = (b + c) / 2;
                cout << d << " ";
            }
        }
        else
        {
            q.push(arr[i]);
            if ((q.size() - p.size()) > 1)
            {
                int b = q.top();
                q.pop();
                p.push(b);
            }
            if ((q.size() - p.size()) == 1)
            {
                int b = q.top();
                cout << b << " ";
            }
            else
            {
                int b = q.top();
                int c = p.top();
                int d = (b + c) / 2;
                cout << d << " ";
            }
        }
        /* code */
    }

    // Write your code here
}
int main()
{
    int arr[5]={5,4,3,2,1};
    findMedian(arr,5);

    return 0;
}